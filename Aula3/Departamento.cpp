#include "Bibliotecas.h"
#include "Departamento.h"

Departamento::Departamento()
{
    pUniv = NULL;
}

Departamento::~Departamento()
{
}

void Departamento::setNome(const char* n)
{
    strcpy_s(nome, n);
}

char* Departamento::getNome()
{
    return nome;
}

void Departamento::setUniversidade(Universidade* pu)
{
    pUniv = pu;
}

Universidade* Departamento::getUniversidade()
{
    return pUniv;
}