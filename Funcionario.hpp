#pragma once
#include "Cpf.hpp"
#include <string>
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{
//Atributos
private:
	float salario;

//Metodos
public:
	Funcionario(Cpf cpf, std::string nome, float salario);
	std::string recuperaNome();
};

