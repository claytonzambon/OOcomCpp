#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
    //Initialization List - Melhora a performance em relação a incialização normal
    //Listas de inicialização evitam a inicialização duplicada de objetos relacionados.
    Conta(numero, titular)
{

}

void ContaPoupanca::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Ñão pode sacar valor negativo" << std::endl;
        return;
    }

    float tarifaDeSaque = valorASacar * 0.03;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (valorDoSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valorDoSaque;
}