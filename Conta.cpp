#include "Conta.hpp"
#include <iostream>

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

std::string Conta::recuperaCpfTitular()
{
    return cpfTitular;
}

std::string Conta::recuperaNomeTitular()
{
    return nomeTitular;
}

//const - Significa que este m�todo n�o pode alterar nenhum atributo da classe.
float Conta::recuperaSaldo() const
{
    return saldo;
}

void Conta::definirNumero(std::string numero)
{
    this->numero = numero;
}

void Conta::definirCpfTitular(std::string cpfTitular)
{
    this->cpfTitular = cpfTitular;
}

void Conta::definirNomeTitular(std::string nomeTitular)
{
    this->nomeTitular = nomeTitular;
}
