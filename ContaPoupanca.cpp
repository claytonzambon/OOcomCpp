#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
    //Initialization List - Melhora a performance em relação a incialização normal
    //Listas de inicialização evitam a inicialização duplicada de objetos relacionados.
    Conta(numero, titular)
{

}

float ContaPoupanca::taxaDeSaque() const
{
    std::cout << "Chamando metodo sacar da conta Poupanca" << std::endl;

    return 0.03;
}