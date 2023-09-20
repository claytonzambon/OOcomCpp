#pragma once
#include "Funcionario.hpp"

class Caixa final :
    public Funcionario
{
public:
    Caixa(Cpf cpf, std::string nome, float salario, short int diaDoPagamento);
    float bonifica��o() const;
};
