#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

//Construtor
Conta::Conta(std::string numero, Titular titular) :
    //Initialization List - Melhora a performance em rela��o a incializa��o normal
    //Listas de inicializa��o evitam a inicializa��o duplicada de objetos relacionados.
    numero(numero),
    titular(titular),
    saldo(0)
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
        std::cout << "��o pode sacar valor negativo" << std::endl;
        return;
    }
    if (valorASacar > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "N�o pode depositar valor negativo" << std::endl;
        return;
    }
    saldo += valorADepositar;
}

std::string Conta::recuperaNumero()
{
    return numero;
}

//const - Significa que este m�todo n�o pode alterar nenhum atributo da classe.
float Conta::recuperaSaldo() const
{
    return saldo;
}

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}
