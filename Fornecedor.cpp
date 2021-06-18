#include "Fornecedor.hpp"

Fornecedor::Fornecedor(double valorCredito, double valorDivida){
    this->valorCredito = valorCredito;
    this->valorDivida = valorDivida;
}

void Fornecedor::setValorCredito(double valor){
    valorCredito = valor;
}

void Fornecedor::setValorDivida(double valor){
    valorDivida = valor;
}

double Fornecedor::getValorCredito(){
    return valorCredito;
}

double Fornecedor::getValorDivida(){
    return valorDivida;
}

double Fornecedor::obterSaldo(){
  double diferenca = valorCredito - valorDivida;

  return diferenca;
}

void Fornecedor::toString(){
    cout << "\nInformacoes:\n" << "Nome: " << nome << "\nTelefone: " << telefone << "\nEndereco: " << endereco << "\nValor de divida: "<< valorDivida << "\nValor de credito: " << valorCredito << "\nDiferenca saldo: " << "R$ " << obterSaldo() << endl;
}