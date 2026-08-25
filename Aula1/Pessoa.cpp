#include "Pessoa.h"
#include <string.h>
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome)
{
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	strcpy_s(nomeP, nome);
}
void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
	idadeP = anoAT - anoP;
	if (mesP < mesAT)
	{
		idadeP = idadeP - 1;
	}
	else {
		if (mesP == mesAT)
		{
			if (diaP < diaAT)
			{
				idadeP = idadeP - 1;
			}
		}
	}

	printf("A idade da Pessoa %s seria %d \n", nomeP, idadeP);
}
int Pessoa::informaIdade()
{
	return idadeP;
}