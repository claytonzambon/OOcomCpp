#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario) :
	Funcionario(cpf, nome, salario)
{

}

float Gerente::bonifica��o() const
{
	return recuperaSalario() * 0.5;
}
