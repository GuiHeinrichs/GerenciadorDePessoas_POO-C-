#include "Administrador.hpp"

Administrador::Administrador(double ajudaDeCusto){
  this->ajudaDeCusto = ajudaDeCusto;
}

void Administrador::setAjudaDeCusto(double ajudaDeCusto){
  this->ajudaDeCusto = ajudaDeCusto;
}

double Administrador::getAjudaDeCusto(){
  return ajudaDeCusto;
}

double Administrador::calcularSalario(){

  double desconto = SalarioBase * Imposto;
  double resultado = (SalarioBase - desconto) + ajudaDeCusto;
  
  return resultado;
}

void Administrador::toString(){
  cout << "\nInformacoes:\n\n" << "Nome: " << nome << "\nTelefone: " << telefone << "\nEndereco: " << endereco << "\nCodigo do Setor: " << CodigoSetor << "\n" << "Salario Base: " << "R$ " << SalarioBase << "\n"  << fixed << setprecision(2) << "Imposto: " << Imposto << fixed << setprecision(3) <<  "\nAjuda de custo: " << "R$ " << ajudaDeCusto << "\nSalario final: " <<"R$ " << calcularSalario() << endl;
}