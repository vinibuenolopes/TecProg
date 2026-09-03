#pragma once
class Universidade;

class Departamento
{
private:
    char nome[30];
    Universidade* pUniv;
public:
    Departamento();
    ~Departamento();

    void setNome(const char* n = "");
    char* getNome();

    void setUniversidade(Universidade* pu);
    Universidade* getUniversidade();
};
