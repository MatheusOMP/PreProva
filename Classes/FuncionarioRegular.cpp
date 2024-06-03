#include "FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase):nome(nome), id(id), salarioBase(salarioBase){}

double FuncionarioRegular::salarioFinal(){
    return salarioBase;
}

FuncionarioRegular::~FuncionarioRegular(){}