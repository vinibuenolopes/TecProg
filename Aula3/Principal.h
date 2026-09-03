#include "Pessoa.h"
#include "Universidade.h"
#pragma once

class Principal
{
private:
	Pessoa Christiano;
	Pessoa Diego, Simao;
	Pessoa Einstein;
	Pessoa Newton;

	Universidade UTFPR;
	Universidade Princeton;
	Universidade Cambridge;

	Departamento ModaUTFPR, TecnologiaUTFPR, DAELN, FisicaPrinceton, MatematicaCambridge;

	int diaAtual;
	int mesAtual;
	int anoAtual;

public:
	Principal();
	~Principal();
	void Executar();
};
