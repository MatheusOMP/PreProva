#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include "Funcionario.hpp"

using namespace std;

class FuncionarioRegular:public Funcionario{
    public:
        FuncionarioRegular(string nome, int id, double salarioBase);
        ~FuncionarioRegular();
        double salarioFinal() final;
};

#endif