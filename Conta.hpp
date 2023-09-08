#pragma once
#include <string>

class Conta
{
private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo = 0;

public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    //Getters
    std::string recuperaNumero();
    std::string recuperaCpfTitular();
    std::string recuperaNomeTitular();
    float recuperaSaldo();
    //Setters
    void definirNumero(std::string numero);
    void definirCpfTitular(std::string cpfTitular);
    void definirNomeTitular(std::string nomeTitular);
};