#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario, short int diaDoPagamento) :
	Funcionario(cpf, nome, salario, diaDoPagamento)
{

}

float Caixa::bonifica��o() const
{
	return recuperaSalario() * 0.1;
}