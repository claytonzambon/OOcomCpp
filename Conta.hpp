#pragma once
#include <string>

class Conta
{
//Atributos
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;

//Métodos
public:
    Conta(std::string numero, std::string cpfTitular, std::string nomeTitular);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    //Getters
    std::string recuperaNumero();
    std::string recuperaCpfTitular();
    std::string recuperaNomeTitular();
    float recuperaSaldo() const; //const - Significa que este método não pode alterar nenhum atributo da classe.
    //Setters
    
};