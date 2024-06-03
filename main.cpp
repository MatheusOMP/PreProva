#include "Classes\Funcionario.hpp"
#include "Classes\Estagiario.hpp"
#include "Classes\Gerente.hpp"
#include "Classes\FuncionarioRegular.hpp"
#include <iostream>

#define SalarioBase 2000
#define Bonus 2000
using std::cout;

int main(){
    Funcionario* a= new Estagiario ("Sergio", 123456, SalarioBase);
    Funcionario* b= new FuncionarioRegular("Alfredo", 214365, SalarioBase);
    Funcionario* c= new Gerente("Francisco", 344252, SalarioBase, Bonus);
    cout << a->nome << " tem um salario de "<<a->salarioFinal()<< endl;
    cout << b->nome << " tem um salario de "<<b->salarioFinal()<< endl;
    cout << c->nome << " tem um salario de "<<c->salarioFinal()<< endl;
}