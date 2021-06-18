#ifndef Vendedor_hpp
#define Vendedor_hpp

#include "Empregado.hpp"

/*
6. Implemente a classe Vendedor como subclasse da classe Empregado.
a. Um determinado vendedor tem como atributos, para além dos atributos da
classe Pessoa e da classe Empregado, os atributos:
i. ValorVendas (correspondente ao valor monetário dos artigos vendidos)
ii. Comissao (porcentagem do valorVendas que será adicionado ao
vencimento base do Vendedor).

b. Redefinir nesta subclasse o método herdado calcularSalario (o salário de um
vendedor é equivalente ao salário de um empregado usual acrescido da referida
comissão).

c. Escreva um programa de teste adequado para esta classe.
*/

class Vendedor:public Empregado{
public:
  Vendedor(){};
  Vendedor(double ValorVendas, double Comissao);

  void setValorVendas(double ValorVendas);
  void setComissao(double Comissao);

  double getValorVendas();
  double getComissao();

  double calcularSalario();
  void toString();
protected:
  double ValorVendas;
  double Comissao;
};

#endif