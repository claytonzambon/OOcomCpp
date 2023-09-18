#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta)
{
    conta.sacar(200);
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius");
  
    ContaPoupanca umaConta("123456", titular);
    
    umaConta.depositar(500);
    RealizaSaque(umaConta);

    ExibeSaldo(umaConta);

    Titular outro(Cpf("098.765.432-10"), "Vinicius Dias");
    ContaCorrente umaOutraConta("654321", titular);
    umaOutraConta.depositar(300);
    //RealizaSaque(umaOutraConta);

    ContaCorrente outraContaCorrente("546321", titular);
    umaOutraConta.tranferePara(outraContaCorrente, 250);

    umaOutraConta.tranferePara(umaConta, 250);

    ExibeSaldo(umaOutraConta);
    ExibeSaldo(umaConta);
    ExibeSaldo(outraContaCorrente);

    cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Funcionario funcionario(Cpf("123.456.789-10"), "Dias Vinicius", 1000);
    
    cout << "Nome do funcionario: " << funcionario.recuperaNome() << endl;

    return 0;
}
