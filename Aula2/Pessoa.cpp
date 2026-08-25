#include "Pessoa.h"
#include "Bibliotecas.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome)
{
	inicializa(diaNa, mesNa, anoNa, nome);
	deptoFiliado = nullptr;
}
void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
	idadeP = anoAT - anoP;
	if (mesP > mesAT)
	{
		idadeP = idadeP - 1;
	}
	else {
		if (mesP == mesAT)
		{
			if (diaP > diaAT)
			{
				idadeP = idadeP - 1;
			}
		}
	}

	cout << "A idade de " << nomeP << " eh "
		<< idadeP << endl;
}

Pessoa::Pessoa() {
	inicializa(0, 0, 0);
	deptoFiliado = nullptr;
}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome) {
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	strcpy_s(nomeP, nome);
}

int Pessoa::informaIdade()
{
	return idadeP;
}

void Pessoa::setUnivFiliado(Universidade* pu) 
{
	pUnivFiliado = pu;
}

void Pessoa::OndeTrabalha()
{
	cout << nomeP << " trabalha para " << pUnivFiliado->getNome() << endl;
}

void Pessoa::setDepartamento(Departamento* d)
{
	deptoFiliado = d;
}

void Pessoa::OndeTrabalhaDpto()
{
	if (deptoFiliado != nullptr)
	{
		cout << nomeP << " trabalha no departamento de " << deptoFiliado->getNome() << endl;
	}
	else
	{
		cout << nomeP << " ainda nao esta filiado a nenhum departamento." << endl;
	}
}