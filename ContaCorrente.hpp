#pragma once
#include "Conta.hpp"


class ContaCorrente final : public Conta<5>
{
public:
    ContaCorrente(std::string numero, Titular titular);
    void tranferePara(Conta& conta, float valor);
    void operator+=(ContaCorrente& contaOrigem);
};

