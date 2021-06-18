#ifndef Operario_hpp
#define Operario_hpp
/*
5. Implemente a classe Operario como subclasse da classe Empregado.
a. Um determinado operário tem como atributos, para além dos atributos da classe
Pessoa e da classe Empregado:
i. ValorProducao (que corresponde ao valor monetário dos artigos
efetivamente produzidos pelo operário)
ii. Comissao (que corresponde à porcentagem do valorProducao que será
adicionado ao vencimento base do operário).

b. Redefinir nesta subclasse o método herdado calcularSalario: o salário de um
operário é equivalente ao salário de um empregado usual acrescido da referida
comissão.

c. Escreva um programa de teste adequado para esta classe
*/
#include "Empregado.hpp"

class Operario:public Empregado{
public:
  Operario(){};
  Operario(double ValorProducao, double Comissao);

  void setValorProducao(double ValorProducao);
  void setComissao(double Comissao);

  double getValorProducao();
  double getComissao();

  double calcularSalario();
  void toString();
protected:
  double ValorProducao;
  double Comissao;
};



#endif

