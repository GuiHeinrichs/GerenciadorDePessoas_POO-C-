#include "Vendedor.hpp"

Vendedor::Vendedor(double ValorVendas, double Comissao){
  this->ValorVendas = ValorVendas;
  this->Comissao = Comissao;
}

void Vendedor::setValorVendas(double ValorVendas){
  this->ValorVendas = ValorVendas;

}

void Vendedor::setComissao(double Comissao){
  this->Comissao = Comissao;

}

double Vendedor::getValorVendas(){
  return ValorVendas;
}

double Vendedor::getComissao(){
  return Comissao;
}

double Vendedor::calcularSalario(){
  double calculaPercent = Comissao / 100;
  double desconto = SalarioBase * Imposto;
  double comissao = ValorVendas * calculaPercent;
  double resultado = (SalarioBase - desconto) + comissao;
  
  return resultado;
}

void Vendedor::toString(){
  cout << "\nInformacoes:\n" << "Nome: " << nome << "\nTelefone: " << telefone << "\nEndereco: " << endereco << "\nCodigo do Setor: " << CodigoSetor << "\n" << "Salario Base: R$ " << SalarioBase << "\n"  << fixed << setprecision(2) << "Imposto: " << Imposto << "%" << "\n Porcentagem de Comissão: " << Comissao << "%" << fixed << setprecision(3) <<"\nValor das vendas: R$ " << ValorVendas << "Salario Final: "<< "R$ " << calcularSalario() << endl;
}

