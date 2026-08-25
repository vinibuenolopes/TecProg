#include "Bibliotecas.h"
#include "Universidade.h"
#pragma once

class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];
	Universidade* pUnivFiliado;
	Departamento* deptoFiliado;
public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Pessoa();
	void inicializa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	void Calc_Idade(int diaAT, int mesAT, int anoAT);
	int informaIdade();
	void setUnivFiliado(Universidade* pu);
	void OndeTrabalha();
	void setDepartamento(Departamento *d);
	void OndeTrabalhaDpto();
};

