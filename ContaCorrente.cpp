#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : 
	Conta(numero, titular)
{

}

float ContaCorrente::taxaDeSaque() const
{
    std::cout << "Chamando metodo sacar da conta corrente" << std::endl;

    return 0.05;
}

void ContaCorrente::tranferePara(Conta& destino, float valor)
{
    //Conta::ResultadoSaque resultado = sacar(valor).first;
    auto resultado = sacar(valor);

    if (resultado.index() == 1) {
        destino.depositar(valor);
    }
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem)
{
    contaOrigem.tranferePara(*this, contaOrigem.recuperaSaldo() / 2);
}
