#ifndef Empregado_hpp
#define Empregado_hpp
#include "Pessoa.hpp"
#include <iomanip>


/*
Desenvolva, como subclasse da classe Pessoa, a classe Empregado. Considere que:
a. Cada instância da classe Empregado tem, para além dos atributos que
caracterizam a classe Pessoa, os atributos:
i. CodigoSetor (inteiro)
ii. SalarioBase (vencimento base)
iii. Imposto (porcentagem retida dos impostos).

b. Implemente um método calcularSalario().

c. Escreva um programa de teste adequado para a classe Empregado.
*/
class Empregado:public Pessoa{
public:
  Empregado(){};
  Empregado(int CodigoSetor, double SalarioBase, double Imposto);

  void setCodigoSetor(int CodigoSetor);
  void setSalarioBase(double SalarioBase);
  void setImposto(double Imposto);

  int getCodigoSetor();
  double getSalarioBase();
  double getImposto();

  virtual double calcularSalario();
  void toString();
protected:
  int CodigoSetor;
  double SalarioBase;
  double Imposto;

};

#endif