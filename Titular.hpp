#pragma once
#include <string>
#include "Cpf.hpp"

class Titular
{
	//Atributos
	private:
		Cpf cpf;
		std::string nome;
	public:
		Titular(Cpf cpf, std::string nome);

	//Metodos
	public:
		std::string recuperaNomeTitular();
		std::string recuperaCpfTitular();

	private:
		void verificaTamanhoDoNome();
};

