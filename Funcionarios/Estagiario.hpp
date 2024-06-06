#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "Funcionario.hpp"

class Estagiario:public Funcionario{
    public:
        Estagiario(string nome, int id, double salarioBase);
        ~Estagiario();
        double salarioFinal() final;
};

#endif