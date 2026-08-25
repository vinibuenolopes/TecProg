#include <stdio.h>
class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];
public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	void Calc_Idade(int diaAT, int mesAT, int anoAT);
	int informaIdade();
};

