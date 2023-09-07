// OOcomCpp.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;

struct Conta
{
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo;
};

void sacar(Conta& conta, float valorASacar) {
    if (valorASacar < 0) {
        cout << "Ñão pode sacar valor negativo" << endl;
        return;
    }
    if (valorASacar > conta.saldo) {
        cout << "Saldo insuficiente" << endl;
        return;
    }
    conta.saldo -= valorASacar;
}

void depositar(Conta& conta, float ValorADepositar) {
    if (ValorADepositar < 0) {
        cout << "Ñão pode depositar valor negativo" << endl;
        return;
    }
    conta.saldo += ValorADepositar;
}

int main()
{
    Conta umaConta;
    umaConta.numero = "123456";
    umaConta.cpfTitular = "123456789-10";
    umaConta.nomeTitular = "Zambon";
    umaConta.saldo = 100;

    Conta umaOutraConta;
    umaOutraConta.saldo = 200;

    cout << "Uma conta: " << umaConta.saldo << " Outra Conta: " << umaOutraConta.saldo << endl;

    depositar(umaOutraConta, 500);

    cout << "Uma conta: " << umaConta.saldo << " Outra Conta: " << umaOutraConta.saldo << endl;
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
