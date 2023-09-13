#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
    //Initialization List - Melhora a performance em rela��o a incializa��o normal
    //Listas de inicializa��o evitam a inicializa��o duplicada de objetos relacionados.
    Conta(numero, titular)
{

}

void ContaPoupanca::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "��o pode sacar valor negativo" << std::endl;
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