#pragma once

class Departamento
{
private:
    char nome[30];
public:
    Departamento(const char* n = "");
    ~Departamento();

    void setNome(const char* n);
    char* getNome();
};
