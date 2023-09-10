#pragma once
#include <string>

class Titular
{
	//Atributos
	private:
		std::string cpf;
		std::string nome;
	public:
		Titular(std::string cpf, std::string nome);

	//Metodos
	public:
		std::string recuperaNomeTitular();
		std::string recuperaCpfTitular();

	private:
		void verificaTamanhoDoNome();
};

