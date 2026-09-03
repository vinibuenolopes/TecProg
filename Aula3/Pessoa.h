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
	Departamento* pDptoFiliado;
public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Pessoa();
	~Pessoa();

	void inicializa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	void Calc_Idade(int diaAT, int mesAT, int anoAT);
	int informaIdade();

	void setNome(char* n);
	char* getNome();

	void setUnivFiliado(Universidade* pu);
	void OndeTrabalha();

	void setDepartamento(Departamento* pdep);
	void OndeTrabalhaDpto();
};