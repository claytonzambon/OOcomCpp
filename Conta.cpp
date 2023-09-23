#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular):
    numero(numero), 
    titular(titular),
    saldo(0)
{
    numeroDeContas++;
}

Conta::~Conta()
{
    std::cout << "Destrutor da Conta" << std::endl;
    numeroDeContas--;
}

Conta::ResultadoSaque Conta::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Nao pode sacar valor negativo" << std::endl;
        return ValorNegativo;
    }

    float tarifaDeSaque = valorASacar * taxaDeSaque();
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (valorDoSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return SaldoInsuficiente;
    }

    saldo -= valorDoSaque;

    return Sucesso;
}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    saldo += valorADepositar;
}

void Conta::operator+=(float valorADepositar) 
{
    depositar(valorADepositar);
}

float Conta::recuperaSaldo() const
{
    return saldo;
}

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}