#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "DiaDaSemana.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta)
{
    //std::pair<Conta::ResultadoSaque, float> resultado = conta.sacar(200);
    auto resultado = conta.sacar(200);
    if (resultado.first == Conta::Sucesso) {
        cout << "Novo saldo da conta: " << resultado.second << endl;
    }
}

void FazLogin(Autenticavel& alguem, string senha)
{
    if (alguem.autentica(senha)) {
        cout << "Login realizado com sucesso" << endl;
    }
    else {
        cout << "Senha invalida" << endl;
    }
}

ostream& operator<<(ostream& cout, const Conta& conta)
{
    Pessoa titular = conta.titular;
    cout << "O saldo da conta é (operador): " << conta.recuperaSaldo() << endl;
    cout << "O titular da conta é: " << titular.recuperaNome() << endl;
    return cout;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius", "umasenha");
  
    ContaPoupanca umaConta("123456", titular);
    
    umaConta.depositar(500);
    RealizaSaque(umaConta);

    ExibeSaldo(umaConta);

    Titular outro(Cpf("098.765.432-10"), "Vinicius Dias", "outrasenha");
    ContaCorrente umaOutraConta("654321", titular);
    (Conta&) umaOutraConta += 300;

    ContaCorrente outraContaCorrente("546321", titular);
    //umaOutraConta.tranferePara(outraContaCorrente, 250);
    outraContaCorrente += umaOutraConta;

    umaOutraConta.tranferePara(umaConta, 250);

    cout << umaOutraConta;
    ExibeSaldo(umaConta);
    ExibeSaldo(outraContaCorrente);

    cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Gerente umGerente(
        Cpf("123.456.789-00"), 
        "Zambon", 
        1500, 
        DiaDaSemana::Terca, 
        "123456"
    );

    return 0;
}
