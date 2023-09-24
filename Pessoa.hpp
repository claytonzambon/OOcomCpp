#pragma once
#include <string>
#include <iostream>

template<typename Documento>
class Pessoa
{
//Atributos
protected:
	Documento documento;
	std::string nome;

//Metodos
public:
	Pessoa(Documento documento, std::string nome):
		documento(documento),
		nome(nome)
	{
		verificaTamanhoDoNome();
	}

	std::string recuperaNome() const
	{
		return nome;
	}

private:
	void verificaTamanhoDoNome()
	{
		if (nome.size() < 5) {
			std::cout << "Nome muito curto, menor ou igual a 5." << std::endl;
			exit(1);
		}
	}
};

