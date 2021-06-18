#include "Empregado.hpp"
#include <iomanip>

Empregado::Empregado(int CodigoSetor, double SalarioBase, double Imposto){

  this->CodigoSetor = CodigoSetor;
  this->SalarioBase = SalarioBase;
  this->Imposto = Imposto;

}

void Empregado::setCodigoSetor(int CodigoSetor){
  this->CodigoSetor = CodigoSetor;
}

void Empregado::setSalarioBase(double SalarioBase){
  this->SalarioBase = SalarioBase;
}

void Empregado::setImposto(double Imposto){
  this->Imposto = Imposto;
}

int Empregado::getCodigoSetor(){
  return CodigoSetor;
}

double Empregado::getSalarioBase(){
  return SalarioBase;
}

double Empregado::getImposto(){
  return Imposto;
}

double Empregado::calcularSalario(){

  double desconto = SalarioBase * Imposto;
  double resultado = SalarioBase - desconto;

  return resultado;
}

void Empregado::toString(){
  cout << "\nInformacoes:\n" << "Nome: " << nome << "\nTelefone: " << telefone << "\nEndereco: " << endereco << "\nCodigo do Setor: " << CodigoSetor << "\n" << "Salario Base: "<< "R$ " << SalarioBase << "\n"  << fixed << setprecision(2) << "Imposto: " << Imposto << "\nSalario final: " << "R$ " << fixed << setprecision(3) << calcularSalario() <<endl;
}