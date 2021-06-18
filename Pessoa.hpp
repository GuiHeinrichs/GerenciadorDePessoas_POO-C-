#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <iostream>
using namespace std;


class Pessoa{
public:
    Pessoa(){};
    Pessoa(string nome, string endereco, string telefone);

    string getNome();
    string getEndereco();
    string getTelefone();

    void setNome(string nome);
    void setEndereco(string endereco);
    void setTelefone(string telefone);

    virtual void toString();
protected:
    string nome;
    string endereco;
    string telefone;
};

#endif