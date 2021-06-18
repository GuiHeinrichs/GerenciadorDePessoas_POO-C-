#include "Sistema.hpp"
#include <iostream>
using namespace std;

void Sistema::incluiPessoa(){

  string respMenu;
  cout << "\nDeseja incluir uma pessoa? " << endl;
  cin >> respMenu;

  if(respMenu == "Sim" || respMenu == "sim" || respMenu == "s" || respMenu == "S"){
    string nome;
    string telefone;
    string endereco;
    string respMenu;
    int respMenu2;

    cout << "\nDigite o nome da Pessoa: " << endl;
    cin >> nome;
    cout << "\nDigite o telefone da Pessoa: " << endl;
    cin >> telefone;
    cout << "\nDigite o endereco da Pessoa: " << endl;
    cin >> endereco;
    
    pessoas.push_back(Pessoa(nome, endereco, telefone));

    cout << nome << " foi adicionado[a] com sucesso!\n" << endl;


    cout << nome << " é empregado? " << endl;
    cin >> respMenu;
    getchar();

      if(respMenu == "Sim" || respMenu == "sim"){
        
        int CodigoSetor;
        double SalarioBase;
        double Imposto;

        cout << "\nDigite as informacoes seguintes: " << endl;
        cout << "\nDigite o codigo do setor: " << endl;
        cin >> CodigoSetor;
        cout << "\nDigite o Salario base: " << endl;
        cin >> SalarioBase;
        cout << "\nDigite o Imposto: " << endl;
        cin >> Imposto;

        empregados.push_back(Empregado(CodigoSetor, SalarioBase, Imposto));
        cout << nome << " Foi adicionado ao grupo de empregados!" << endl;
      
        cout << "\nEscolha a função de " << nome << ": " << endl;
        cout << "\n1-Administrador\n2-Operario\n3-Vendedor.\n" << endl;
        cin >> respMenu2;

          if(respMenu2 == 1){
            double ajudaDeCusto;
            cout << "\nDigite as informacoes para confirmar que e um Administrador: " << endl;

            cout << "\nAjuda de custo: " << endl;
            cin >> ajudaDeCusto;

            adms.push_back(Administrador(ajudaDeCusto));

            cout << "\nAdicionado ao grupo de Administradores!" << endl;
          }else if(respMenu2 == 2){
            double ValorProducao, Comissao;

            cout << "\nDigite as informacoes para confirmar que e um Operario: " << endl;

            cout << "\nValor de producao: " << endl;
            cin >> ValorProducao;

            cout << "\n% de comissao: " << endl;
            cin >> Comissao;

            operarios.push_back(Operario(ValorProducao, Comissao));

            cout << "\nAdicionado ao grupo de Operarios!" << endl;
          }else if(respMenu2 == 3){
            double ValorVendas, Comissao;

            cout << "\nDigite as informacoes para confirmar que e um Vendedor: " << endl;

            cout << "\nValor de producao: " << endl;
            cin >> ValorVendas;

            cout << "\n% de comissao: " << endl;
            cin >> Comissao;

            vendedores.push_back(Vendedor(ValorVendas, Comissao));

            cout << "\nAdicionado ao grupo de Vendedores!" << endl;
          }else{
            cout << "\nValor inserido nao foi reconhecido!" << endl;
            exit(1);
          }
      }else if(respMenu == "Nao" || respMenu == "nao"){
        string respfechado;

        cout << "\nA pessoa é fornecedor(a)? " << endl;
        cin >> respfechado;

          if(respfechado == "sim" || respfechado == "Sim"){
            double valorCredito, valorDivida;

            cout << "\nDigite as informacoes para confirmar que e um Fornecedor: " << endl;

            cout << "\nValor credito: " << endl;
            cin >> valorCredito;

            cout << "\nValor divida: " << endl;
            cin >> valorDivida;

            fornecedores.push_back(Fornecedor(valorCredito, valorDivida));

            cout << "\nAdicionado ao grupo de Fornecedores!" << endl;
          }
      }
  }else{
    cout << "\nFoi escolhido nao adicionar pessoa!" << endl;
    exit(1); 
  } 
}

void Sistema::atualizarPessoa(){
  string nomePesquisa;
  int respAtualizar;
  
  cout << "\nDigite o nome da pessoa que deseja atualizar: " << endl;
  cin >> nomePesquisa;

  for(int i=0; i < pessoas.size(); i++){
    if(pessoas[i].getNome() == nomePesquisa){
      cout << "\n" << nomePesquisa << " foi encontrado(a) com sucesso, o que deseja alterar? \n" << endl;

      cout << "\n1-Nome;\n2-Telefone;\n3-Endereco.\n" << endl;
      cin >> respAtualizar;

        if(respAtualizar == 1){
          string novoNome;
          
          cout << "\nDigite o nome: " << endl;
          cin >> novoNome;

          pessoas[i].setNome(novoNome);

          cout << "\nNome foi mudado com sucesso!";
        }else if(respAtualizar == 2){
          string novoTelefone;

          cout << "\nDigite o telefone: " << endl;
          cin >> novoTelefone;

          pessoas[i].setNome(novoTelefone);

          cout << "\nTelefone foi mudado com sucesso!";
        }else if(respAtualizar == 3){
          string novoEndereco;

          cout << "\nDigite o endereco: " << endl;
          cin >> novoEndereco;

          pessoas[i].setNome(novoEndereco);

          cout << "\nEndereco foi mudado com sucesso!";
        }else{
          cout << "\nValor inserido nao foi encontrado." << endl;
          exit(1);
        }
    }
  }
}

void Sistema::Relatorios(){

  int escolha;
  
  cout << "\nSelecione o relatoria que deseja acessar: " << endl;
  cout << "\n1-Pessoas.\n2-Fornecedores.\n3-Empregados.\n" << endl;
  cin >> escolha;

    if(escolha == 1){
      for(int i=0; i < pessoas.size(); i++){
        cout << "\n\nPessoa " << i << ":" << endl;
        cout << "\nNome: " << pessoas[i].getNome() << endl;
        cout << "\nTelefone: " << pessoas[i].getTelefone() << endl;
        cout << "\nEndereco: " << pessoas[i].getEndereco() << endl;
      }
    }else if(escolha == 2){
      for(int i=0; i < fornecedores.size(); i++){
        cout << "\n=== Fornecedor(a) #" << i << " === "<< endl;
            cout << "\nNome: "<< pessoas[i].getNome() << endl;
            cout << "\nEndereco: " << pessoas[i].getEndereco() << endl;
            cout << "\nTelefone: " << pessoas[i].getTelefone() << endl;
            cout << "\nValor credito: " << fornecedores[i].getValorCredito() << endl;
            cout << "\nValor divida: " << fornecedores[i].getValorDivida() << endl;
            cout << "\nDiferenca saldo: " << fornecedores[i].obterSaldo() << endl;
            cout << "\n" << endl;
      }
    }else if(escolha == 3){
      int escolhaEmpregados;
      cout << "\nDeseja mostrar o relatorio de: " << endl;
      cout << "\n1-Todos.\n2-Operarios.\n3-Administradores.\n4-Vendedores.\n" << endl;
      cin >> escolhaEmpregados;

        if(escolhaEmpregados == 1){
          for(int i=0; i < empregados.size(); i++){
            cout << "\n=== Empregado(a) #" << i << " === "<< endl;
            cout << "\nNome: "<< pessoas[i].getNome() << endl;
            cout << "\nEndereco: " << pessoas[i].getEndereco() << endl;
            cout << "\nTelefone: " << pessoas[i].getTelefone() << endl;
            cout << "\nCodigo de setor: " <<empregados[i].getCodigoSetor() << endl;
            cout << "\n% do imposto: " << empregados[i].getImposto() << endl;
            cout << "\nSalario Base: " << empregados[i].getSalarioBase() << endl;
            cout << "\nSalario Final: " << empregados[i].calcularSalario() << endl;
            cout << "\n" << endl;
          }
        }else if(escolhaEmpregados == 2){
          for(int i=0; i<operarios.size(); i++){

            cout << "\n=== Operario(a) #" << i << " === "<< endl;
            cout << "\nNome: "<< pessoas[i].getNome() << endl;
            cout << "\nEndereco: " << pessoas[i].getEndereco() << endl;
            cout << "\nTelefone: " << pessoas[i].getTelefone() << endl;
            cout << "\nCodigo de setor: " <<empregados[i].getCodigoSetor() << endl;
            cout << "\n% do imposto: " << empregados[i].getImposto() << endl;
            cout << "\nSalario Base: " << empregados[i].getSalarioBase() << endl;
            cout << "\nValor producao: " << operarios[i].getValorProducao() << endl;
            cout << "\nComissao: " << operarios[i].getComissao() << endl;
            cout << "\nSalario Final: " << operarios[i].calcularSalario() << endl;

            cout << "\n" << endl;
          }
        }else if(escolhaEmpregados == 3){
          for(int i =0; i < adms.size(); i++){
            cout << "\n=== Administrador(a) #" << i << " === "<< endl;
            cout << "\nNome: "<< pessoas[i].getNome() << endl;
            cout << "\nEndereco: " << pessoas[i].getEndereco() << endl;
            cout << "\nTelefone: " << pessoas[i].getTelefone() << endl;
            cout << "\nCodigo de setor: " << empregados[i].getCodigoSetor() << endl;
            cout << "\n% do imposto: " << empregados[i].getImposto() << endl;
            cout << "\nSalario Base: " << empregados[i].getSalarioBase() << endl;
            cout << "\nAjuda de custo: " << adms[i].getAjudaDeCusto() << endl;
            cout << "\nSalario Final: " << adms[i].calcularSalario() << endl;

            cout << "\n" << endl;
          }
        }else if(escolhaEmpregados == 4){
          for(int i =0; i < vendedores.size(); i++){
            cout << "\n=== Vendedor(a) #" << i << " === "<< endl;
            cout << "\nNome: "<< pessoas[i].getNome() << endl;
            cout << "\nEndereco: " << pessoas[i].getEndereco() << endl;
            cout << "\nTelefone: " << pessoas[i].getTelefone() << endl;
            cout << "\nCodigo de setor: " <<empregados[i].getCodigoSetor() << endl;
            cout << "\n% do imposto: " << empregados[i].getImposto() << endl;
            cout << "\nSalario Base: " << empregados[i].getSalarioBase() << endl;
            cout << "\nValor Venda: " << vendedores[i].getValorVendas() << endl;
            cout << "\nComissao: " << vendedores[i]. getComissao() << endl;
            cout << "\nSalario Final: " << vendedores[i].calcularSalario() << endl;
            cout << "\n" << endl;
          }
        }else{
          cout << "\nInformacao inserida nao encontrada!" << endl;
          exit(1);
        }
    }

  }

