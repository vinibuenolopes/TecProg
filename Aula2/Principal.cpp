#include "Principal.h"
#include <time.h>

Principal::Principal():
Simao(),
Einstein(),
Newton()
{
	Simao.inicializa(3, 10, 1976, "Jean Simao");
	Einstein.inicializa(14, 3, 1879, "Albert Einstein");
	Newton.inicializa(4, 1, 1643, "Isaac Newton");

	UTFPR.setNome("UTFPR");
	Princeton.setNome("Princeton");
	Cambridge.setNome("Cambridge");

	Departamento Fisica("Fisica");
	Departamento Matematica("Matematica");

	Simao.setUnivFiliado(&UTFPR);
	Einstein.setUnivFiliado(&Princeton);
	Newton.setUnivFiliado(&Cambridge);

	Einstein.setDepartamento(&Fisica);
	Newton.setDepartamento(&Matematica);

	Einstein.OndeTrabalhaDpto();
	Newton.OndeTrabalhaDpto();

	struct tm* local;
	time_t segundos;
	time(&segundos);
	local = localtime(&segundos);
	
	diaAtual = local->tm_mday;
	
	mesAtual = local->tm_mon + 1;

	anoAtual = local->tm_year + 1900;

	Executar();
}
void Principal::Executar()
{
	Simao.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Simao.OndeTrabalha();
	Einstein.OndeTrabalha();
	Newton.OndeTrabalha();
	Simao.OndeTrabalhaDpto();
	Einstein.OndeTrabalhaDpto();
	Newton.OndeTrabalhaDpto();
}

Principal::~Principal() 
{
}