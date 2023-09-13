#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
    //Atributos
    private:
        static int numeroDeContas;

    public:
        static int recuperaNumeroDeContas();

    private:
        std::string numero;
        Titular titular;

    protected:
        float saldo;

    //M�todos
    public:
        Conta(std::string numero, Titular titular);
        ~Conta(); //M�todo destrutor
        void sacar(float valorASacar);
        void depositar(float valorADepositar);
        //Getters
        std::string recuperaNumero();
        float recuperaSaldo() const; //const - Significa que este m�todo n�o pode alterar nenhum atributo da classe.
        
        //Setters
};