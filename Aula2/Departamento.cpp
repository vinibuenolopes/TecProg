#include "Bibliotecas.h"
#include "Departamento.h"

Departamento::Departamento(const char* n)
{
    strcpy_s(nome, n);
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