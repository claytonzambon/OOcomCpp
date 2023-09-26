#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : 
	Conta(numero, titular)
{

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
