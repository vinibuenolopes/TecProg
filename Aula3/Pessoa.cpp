#include "Pessoa.h"
#include "Bibliotecas.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome)
{
	inicializa(diaNa, mesNa, anoNa, nome);
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
	strcpy_s(nomeP, "");
	pUnivFiliado = NULL;
	pDptoFiliado = NULL;
}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome) {
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	strcpy_s(nomeP, nome);
	pUnivFiliado = NULL;
	pDptoFiliado = NULL;
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
	if (pUnivFiliado)
	{
		cout << nomeP << " trabalha para " << pUnivFiliado->getNome() << endl;
	}
}

void Pessoa::setDepartamento(Departamento* pdep)
{
	pDptoFiliado = pdep;
}

void Pessoa::OndeTrabalhaDpto()
{
	if (pDptoFiliado != NULL)
	{
		cout << nomeP << " trabalha para " << pUnivFiliado->getNome() << " no departamento de " << pDptoFiliado->getNome() << endl;
	}
	else
	{
		cout << nomeP << " ainda nao esta filiado a nenhum departamento." << endl;
	}
}

void Pessoa::setNome(char* n)
{
	strcpy(nomeP,n);
}

char* Pessoa::getNome() 
{
	return nomeP;
}

Pessoa::~Pessoa() 
{
}