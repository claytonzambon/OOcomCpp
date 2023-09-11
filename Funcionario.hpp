#pragma once
#include "Cpf.hpp"
#include <string>

class Funcionario
{
//Atributos
public:

private:
	Cpf cpf;
	std::string nome;
	float salario;

//Metodos
public:
	Funcionario(Cpf cpf, std::string nome, float salario);
};

