#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>
#include <iostream>

using namespace std;

class Funcionario{
    public:
        string nome;
        int id;
        double salarioBase;
    public:
        Funcionario();
        ~Funcionario();
        virtual double salarioFinal()=0;
};

#endif