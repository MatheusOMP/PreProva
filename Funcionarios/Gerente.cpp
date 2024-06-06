#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salarioBase, double bonus):bonus(bonus){
    Funcionario::nome=nome;
    Funcionario::id=id;
    Funcionario::salarioBase=salarioBase;
}

double Gerente::salarioFinal(){
    return salarioBase*5+bonus;
}

Gerente::~Gerente(){}