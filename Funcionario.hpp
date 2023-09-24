#pragma once
#include "Cpf.hpp"
#include <string>
#include "Pessoa.hpp"
#include "DiaDaSemana.hpp"

class Funcionario : public Pessoa<Cpf>
{
//Atributos
private:
	float salario;
	//0 = Domingo, 1 = Segunda, etc.
	DiaDaSemana diaDoPagamento;

//Metodos
public:
	Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
	std::string recuperaNome() const;
	float recuperaSalario() const;
	virtual float bonificação() const = 0;
};

