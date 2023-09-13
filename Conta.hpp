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
        float saldo;
        
        /** 1 = Conta Corrente e 2 = Conta Poupanca */
        short int tipoConta;

    //Métodos
    public:
        Conta(std::string numero, Titular titular, short int tipoConta);
        ~Conta(); //Método destrutor
        void sacar(float valorASacar);
        void depositar(float valorADepositar);
        //Getters
        std::string recuperaNumero();
        float recuperaSaldo() const; //const - Significa que este método não pode alterar nenhum atributo da classe.
        
        //Setters
};