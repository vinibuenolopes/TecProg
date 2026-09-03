#pragma once
#include "Departamento.h"

class Universidade
{
private:
	char nome[50];
	Departamento* pDptos[50];
public:
	Universidade();
	~Universidade();

	void setNome(const char* n);
	char* getNome();
	void setDepartamento(Departamento* pdep, int ctd);
	void imprimeDptos();
};