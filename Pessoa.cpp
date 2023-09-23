#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome) :
	cpf(cpf),
	nome(nome)
{
    verificaTamanhoDoNome();
}

std::string Pessoa::recuperaNome() const
{
    return nome;
}

void Pessoa::verificaTamanhoDoNome() {
    if (nome.size() < 5) {
        std::cout << "Nome muito curto, menor ou igual a 5." << std::endl;
        exit(1);
    }
}
