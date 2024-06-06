#include "Estagiario.hpp"

Estagiario::Estagiario(string nome, int id, double salarioBase){
    Funcionario::nome=nome;
    Funcionario::id=id;
    Funcionario::salarioBase=salarioBase;
}

double Estagiario::salarioFinal(){
    double salarioBase=900;
    return salarioBase;
}

Estagiario::~Estagiario(){}