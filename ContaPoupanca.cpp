#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
    //Initialization List - Melhora a performance em rela��o a incializa��o normal
    //Listas de inicializa��o evitam a inicializa��o duplicada de objetos relacionados.
    Conta(numero, titular)
{

}

float ContaPoupanca::taxaDeSaque() const
{
    std::cout << "Chamando metodo sacar da conta Poupanca" << std::endl;

    return 0.03;
}