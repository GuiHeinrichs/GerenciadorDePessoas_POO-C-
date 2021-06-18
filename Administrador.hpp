#ifndef Administrador_hpp
#define Administrador_hpp

/*
Implemente a classe Administrador como subclasse da classe Empregado.
a. Um determinado administrador tem como atributos, para além dos atributos da
classe Pessoa e da classe Empregado, o atributo ajudaDeCusto (ajudas referentes
a viagens, estadias, ...).

b. Note que deverá redefinir na classe Administrador o método herdado
calcularSalario: o salário de um administrador é equivalente ao salário de um
empregado usual acrescido da ajuda de custo).

c. Escreva um programa de teste adequado para esta classe.
*/

#include "Empregado.hpp"

class Administrador:public Empregado{
public:
  Administrador(){};
  Administrador(double ajudaDeCusto);

  void setAjudaDeCusto(double ajudaDeCusto);

  double getAjudaDeCusto();
  double calcularSalario();
  void toString();
protected:
  double ajudaDeCusto;
};




#endif