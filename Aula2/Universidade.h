#pragma once
#include "Departamento.h"

class Universidade 
{
private:
	char nome[30];
	Departamento* depto;
public:
	Universidade(const char* n = "");
	~Universidade();

	void setNome(const char* n);
	char* getNome();
};
