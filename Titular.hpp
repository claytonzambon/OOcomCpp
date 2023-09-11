#pragma once
#include <string>
#include "Cpf.hpp"
#include "Pessoa.hpp"

class Titular : public Pessoa
{
//Construtor
public:
	Titular(Cpf cpf, std::string nome);
};

