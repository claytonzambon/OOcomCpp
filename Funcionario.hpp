#pragma once
#include "Cpf.hpp"
#include <string>
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{
//Atributos
private:
	float salario;
	//0 = Domingo, 1 = Segunda, etc.
	short int diaDoPagamento;

//Metodos
public:
	Funcionario(Cpf cpf, std::string nome, float salario, short int diaDoPagamento);
	std::string recuperaNome() const;
	float recuperaSalario() const;
	virtual float bonificação() const = 0;
};

