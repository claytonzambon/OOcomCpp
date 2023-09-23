#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa
{
//Atributos
protected:
	Cpf cpf;
	std::string nome;

//Metodos
public:
	Pessoa(Cpf cpf, std::string nome);
	std::string recuperaNome() const;

private:
	void verificaTamanhoDoNome();
};

