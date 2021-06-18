#include "Operario.hpp"

Operario::Operario(double ValorProducao, double Comissao){
  this->ValorProducao = ValorProducao;
  this->Comissao = Comissao;
}

void Operario::setValorProducao(double ValorProducao){
  this->ValorProducao = ValorProducao;
}

void Operario::setComissao(double Comissao){
  this->Comissao = Comissao;
}

double Operario::getValorProducao(){
  return ValorProducao;
}

double Operario::getComissao(){
  return Comissao;
}

double Operario::calcularSalario(){
  double calculaPercent = Comissao / 100;
  double desconto = SalarioBase * Imposto;
  double comissao = ValorProducao * calculaPercent;
  double resultado = (SalarioBase - desconto) + comissao;
  
  return resultado;
}

void Operario::toString(){
  cout << "\nInformacoes:\n" << "Nome: " << nome << "\nTelefone: " << telefone << "\nEndereco: " << endereco << "\nCodigo do Setor: " << CodigoSetor << "\n" << "Salario Base: R$ " << SalarioBase << "\n"  << fixed << setprecision(2) << "Imposto: " << Imposto << "%" << "\n Porcentagem de Comissão: " << Comissao << "%" << fixed << setprecision(3) <<"\nValor da produção: R$ " << ValorProducao << "\nSalario final: " << "R$ " << calcularSalario() << endl;
}