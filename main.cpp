#include <iostream>
#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Sistema.hpp"

using namespace std;

int main(){

  Sistema s1;

  s1.incluiPessoa();
  s1.atualizarPessoa();
  s1.Relatorios();

  // Pessoa p1;

  // p1.setNome("Jose");
  // p1.setEndereco("Porto Alegre");
  // p1.setTelefone("51-23232421");
  // p1.toString();
  

    // Fornecedor nike;

    // nike.setNome("Nike");
    // nike.setTelefone("984043919");
    // nike.setEndereco("RS, Cachoeirinha.");
    // nike.setValorCredito(14.234);
    // nike.setValorDivida(2.043);

    // nike.obterSaldo();

    // nike.toString();

    // Empregado jose;

    // jose.setNome("Jose");
    // jose.setTelefone("984043919");
    // jose.setEndereco("Cachoeirinha");

    // jose.setCodigoSetor(22);
    // jose.setSalarioBase(5.280);
    // jose.setImposto(0.09);
    // jose.calcularSalario();

    // jose.toString();

    // Administrador ad1;

    // ad1.setNome("Carlos");
    // ad1.setTelefone("51-984043919");
    // ad1.setEndereco("Porto Alegre.");
    // ad1.setCodigoSetor(22);
    // ad1.setSalarioBase(2.202);
    // ad1.setImposto(0.2);

    // ad1.setAjudaDeCusto(3.003);
    // ad1.toString();
    // ad1.calcularSalario();

    // Operario op1(5.043, 40.0);

    // op1.setNome("Carlos");
    // op1.setTelefone("51-984043919");
    // op1.setEndereco("Cachoeirinha");
    // op1.setSalarioBase(3.333);
    // op1.setImposto(0.2);
    // op1.setCodigoSetor(23);
    // op1.calcularSalario();
    // op1.toString();

//     Vendedor vd1(5.043, 40.0);

//     vd1.setNome("Carlos");
//     vd1.setTelefone("51-984043919");
//     vd1.setEndereco("Cachoeirinha");
//     vd1.setSalarioBase(3.333);
//     vd1.setImposto(0.2);
//     vd1.setCodigoSetor(23);
//     vd1.calcularSalario();
//     vd1.toString();

}