#include "FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase){
    Funcionario::nome=nome;
    Funcionario::id=id;
    Funcionario::salarioBase=salarioBase;
}

double FuncionarioRegular::salarioFinal(){
    return salarioBase;
}

FuncionarioRegular::~FuncionarioRegular(){}