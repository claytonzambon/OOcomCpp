// OOcomCpp.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    ;
    Conta umaContaDesnecessaria("333666", Titular(Cpf("111.222.222-55"), "Karine"));

    cout << "O saldo da conta eh: " << conta.recuperaSaldo() << endl;
}

int main()
{
    Conta umaConta("123456", Titular(Cpf("123.467.890-10"), "Clayton"));
    umaConta.depositar(100);

    /*
    cout <<
        "Dados Uma Conta => Numero: " << umaConta.recuperaNumero() <<
        " Nome: " << umaConta.recuperaNomeTitular() <<
        " Cpf: " << umaConta.recuperaCpfTitular() << endl;
    */
    
    ExibeSaldo(umaConta);

    Conta umaOutraConta("654321", Titular(Cpf("109.876.543-21"), "Zambon"));

    /*
    cout <<
        "Dados Outra Conta => Numero: " << umaOutraConta.recuperaNumero() <<
        " Nome: " << umaOutraConta.recuperaNomeTitular() <<
        " Cpf: " << umaOutraConta.recuperaCpfTitular() << endl;
    */
    ExibeSaldo(umaOutraConta);

    cout << endl;

    cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra Conta: " << umaOutraConta.recuperaSaldo() << endl;

    umaOutraConta.depositar(500);

    cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra Conta: " << umaOutraConta.recuperaSaldo() << endl;

    umaOutraConta.sacar(200);

    cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra Conta: " << umaOutraConta.recuperaSaldo() << endl;

    cout << endl;
    cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
