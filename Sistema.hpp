#ifndef Sistema_hpp
#define Sistema_hpp

#include "Empregado.hpp"
#include "Operario.hpp"
#include "Administrador.hpp"
#include "Vendedor.hpp"
#include "Pessoa.hpp"
#include "Fornecedor.hpp"

#include <vector>
/*
Implemente um sistema que permita trabalhar com empregados de diferentes tipos e
tenha as opções de:
a. Incluir Pessoa
b. Atualizar Pessoa
c. Relatórios:

i. Pessoas: Listagem de todas as pessoas cadastradas no sistema,
apresentando nome, endereço e telefone
ii. Fornecedores: Listagem de todos fornecedores e seus detalhes
iii. Empregados:
1. Todos: Listar todos empregados e seus salários calculados
2. Administradores e seus atributos específicos
3. Operários e seus atributos específicos
4. Vendedores e seus atributos específicos
*/
class Sistema{
public:
  Sistema(){};
  
  void incluiPessoa();
  void atualizarPessoa();
  void Relatorios();

private:

  vector <Operario> operarios;
  vector <Administrador> adms;
  vector <Vendedor> vendedores;
  vector <Empregado> empregados;
  vector <Pessoa> pessoas;
  vector <Fornecedor> fornecedores;

};
#endif
