#include "Funcionarios\Funcionario.hpp"
#include "Funcionarios\Estagiario.hpp"
#include "Funcionarios\Gerente.hpp"
#include "Funcionarios\FuncionarioRegular.hpp"
#include "Veiculos\Caminhao.hpp"
#include "Veiculos\Van.hpp"
#include "Veiculos\Veiculos.hpp"

#include <vector>
#include <iostream>

#define SalarioBase 2000
#define Bonus 2000
using std::cout;
using std::vector;

int main(){
    Funcionario* a= new Estagiario ("Sergio", 123456, SalarioBase);
    Funcionario* b= new FuncionarioRegular("Alfredo", 214365, SalarioBase);
    Funcionario* c= new Gerente("Francisco", 344252, SalarioBase, Bonus);

    vector<Funcionario*> Funcionarios;

    Funcionarios.push_back(a);
    Funcionarios.push_back(b);
    Funcionarios.push_back(c);

    for (auto Funcionario:Funcionarios)
        cout << Funcionario->nome << " tem o id " << Funcionario->id << " e um salario de "<<Funcionario->salarioFinal()<< endl;

    vector<Veiculo*> Veiculos;

    cout << endl;

    Veiculo* d= new Van ("GG", "XS", 10, 10);
    Veiculo* e= new Caminhao ("Optmus","Prime",50,2);

    Veiculos.push_back(d);
    Veiculos.push_back(e);

    for (auto Veiculo:Veiculos){
        Veiculo->exibirDados();
    }
}