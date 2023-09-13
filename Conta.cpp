#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

//Construtor
Conta::Conta(std::string numero, Titular titular, short int tipoConta) :
    //Initialization List - Melhora a performance em relação a incialização normal
    //Listas de inicialização evitam a inicialização duplicada de objetos relacionados.
    numero(numero),
    titular(titular),
    saldo(0),
    tipoConta(tipoConta)
{
    numeroDeContas++;
}

//Destrutor
Conta::~Conta()
{
    numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Ñão pode sacar valor negativo" << std::endl;
        return;
    }

    float taxa;
    if (tipoConta == 1) {
        taxa = 0.05;
    }
    if (tipoConta == 2) {
        taxa = 0.03;
    }

    float tarifaDeSaque = valorASacar * taxa;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (valorDoSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valorDoSaque;
}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "Não pode depositar valor negativo" << std::endl;
        return;
    }
    saldo += valorADepositar;
}

std::string Conta::recuperaNumero()
{
    return numero;
}

//const - Significa que este método não pode alterar nenhum atributo da classe.
float Conta::recuperaSaldo() const
{
    return saldo;
}

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}
