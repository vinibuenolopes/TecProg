#include <stdio.h>
#include "Pessoa.h"
int main()
{
	Pessoa Simao(3, 10, 1976);
	Pessoa Einstein(14, 3, 1879, "Albert Einstein");
	Pessoa Newton(4, 1, 1643, "Isaac Newton");

	Simao.Calc_Idade(25, 8, 2009);
	Einstein.Calc_Idade(25, 8, 2009);
	Newton.Calc_Idade(25, 8, 2009);

	getchar();

	return 0;
}