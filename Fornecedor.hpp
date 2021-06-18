#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include "Pessoa.hpp"

/*
2. Considere, como subclasse da classe Pessoa (desenvolvida no exercício anterior) a classe
Fornecedor. Considere:

a. Cada instância da classe Fornecedor tem, para além dos atributos que
caracterizam a classe Pessoa, os atributos:
i. ValorCredito (correspondente ao crédito máximo atribuído ao
fornecedor)
ii. ValorDivida (montante da dívida para com o fornecedor).

b. Implemente, além dos usuais métodos seletores e modificadores, um método
obterSaldo() que devolve a diferença entre os valores dos atributos valorCredito
e valorDivida.

c. Depois de implementada a classe Fornecedor, crie um programa de teste
adequado que lhe permita verificar o funcionamento dos métodos
implementados na classe Fornecedor e os herdados da classe Pessoa

*/

class Fornecedor:public Pessoa{
public:
    Fornecedor(){};
    Fornecedor(double valorCredito, double valorDivida);

    void setValorCredito(double valor);
    void setValorDivida(double valor);

    double getValorCredito();
    double getValorDivida();

    double obterSaldo();
    void toString();

protected:
    double valorCredito;
    double valorDivida;

};


#endif

