#include "Pessoa.h"
#include "Universidade.h"
#pragma once

class Principal
{
private:
	Pessoa Simao;
	Pessoa Einstein;
	Pessoa Newton;

	Universidade UTFPR;
	Universidade Princeton;
	Universidade Cambridge;

	int diaAtual;
	int mesAtual;
	int anoAtual;

public:
	Principal();
	~Principal();
	void Executar();
};
