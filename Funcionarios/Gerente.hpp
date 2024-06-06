#ifndef GERENTE
#define GERENTE     

#include "Funcionario.hpp"

class Gerente:public Funcionario{
    public:
        double bonus;
    public:
        Gerente(string nome, int id, double salarioBase, double bonus);
        ~Gerente();
        double salarioFinal() final;
};

#endif