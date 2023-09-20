#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento, std::string senha) :
	Funcionario(cpf, nome, salario, diaDoPagamento),
	Autenticavel(senha)
{

}

float Gerente::bonifica��o() const
{
	return recuperaSalario() * 0.5;
}
