#pragma once
#include "Conta.hpp"


class ContaCorrente final : public Conta
{
public:
    ContaCorrente(std::string numero, Titular titular);
    float taxaDeSaque() const override;
    void tranferePara(Conta& conta, float valor);
    void operator+=(ContaCorrente& contaOrigem);
};

