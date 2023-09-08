#pragma once
#include <string>

class Conta
{
//Atributos
private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo = 0;

//M�todos
public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    //Getters
    std::string recuperaNumero();
    std::string recuperaCpfTitular();
    std::string recuperaNomeTitular();
    float recuperaSaldo() const; //const - Significa que este m�todo n�o pode alterar nenhum atributo da classe.
    //Setters
    void definirNumero(std::string numero);
    void definirCpfTitular(std::string cpfTitular);
    void definirNomeTitular(std::string nomeTitular);
};