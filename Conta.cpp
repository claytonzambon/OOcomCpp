#include "Conta.hpp"
#include <iostream>

Conta::Conta(std::string numero, std::string cpfTitular, std::string nomeTitular)
{
    this->numero = numero;
    this->cpfTitular = cpfTitular;
    this->nomeTitular = nomeTitular;
    this->saldo = 0;
}

void Conta::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Ñão pode sacar valor negativo" << std::endl;
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
        std::cout << "Não pode depositar valor negativo" << std::endl;
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

//const - Significa que este método não pode alterar nenhum atributo da classe.
float Conta::recuperaSaldo() const
{
    return saldo;
}
