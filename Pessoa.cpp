#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endereco, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setEndereco(string endereco){
    this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::getNome(){
    return nome;
}

string Pessoa::getEndereco(){
    return endereco;
}

string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::toString(){
    cout << "\nInformacoes:\n" << nome << "\n" << telefone << "\n" << endereco << "\n" << endl;
}