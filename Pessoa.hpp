#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa
{
//Atributos
private:
	Cpf cpf;
	std::string nome;

public:
	Pessoa(Cpf cpf, std::string nome);

//Metodos
private:
	void verificaTamanhoDoNome();
};

