#include "Principal.h"
#include <time.h>

Principal::Principal() :
	Simao(),
	Einstein(),
	Newton()
{
	Christiano.inicializa(17, 8, 1989, "Za Maria");
	Diego.inicializa(6, 10, 1989, "Diego");
	Simao.inicializa(3, 10, 1976, "Jean Simao");
	Einstein.inicializa(14, 3, 1879, "Albert Einstein");
	Newton.inicializa(4, 1, 1643, "Isaac Newton");

	UTFPR.setNome("Universidade Tecnologica Federal do Parana");
	Princeton.setNome("University of Princeton");
	Cambridge.setNome("University of Cambridge");

	Christiano.setUnivFiliado(&UTFPR);
	Diego.setUnivFiliado(&UTFPR);
	Simao.setUnivFiliado(&UTFPR);
	Einstein.setUnivFiliado(&Princeton);
	Newton.setUnivFiliado(&Cambridge);

	ModaUTFPR.setNome("Moda");
	TecnologiaUTFPR.setNome("Tecnologia da UTFPR");
	DAELN.setNome("Eletronica da UTFPR");
	FisicaPrinceton.setNome("Fisica de Princenton");
	MatematicaCambridge.setNome("Matematica de Cambridge");


	UTFPR.setDepartamento(&DAELN, 0);
	UTFPR.setDepartamento(&ModaUTFPR, 1);
	UTFPR.setDepartamento(&TecnologiaUTFPR, 2);
	Princeton.setDepartamento(&FisicaPrinceton, 0);
	Cambridge.setDepartamento(&MatematicaCambridge, 0);

	Christiano.setDepartamento(&ModaUTFPR);
	Diego.setDepartamento(&TecnologiaUTFPR);
	Simao.setDepartamento(&DAELN);
	Einstein.setDepartamento(&FisicaPrinceton);
	Newton.setDepartamento(&MatematicaCambridge);

	DAELN.setUniversidade(&UTFPR);
	ModaUTFPR.setUniversidade(&UTFPR);
	TecnologiaUTFPR.setUniversidade(&UTFPR);
	FisicaPrinceton.setUniversidade(&Princeton);
	MatematicaCambridge.setUniversidade(&Cambridge);

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
	Christiano.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Diego.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Simao.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);
	printf("\n");
	
	Christiano.OndeTrabalha();
	Diego.OndeTrabalha();
	Simao.OndeTrabalha();
	Einstein.OndeTrabalha();
	Newton.OndeTrabalha(); 
	
	printf("\n");

	Christiano.OndeTrabalhaDpto();
	Diego.OndeTrabalhaDpto();
	Simao.OndeTrabalhaDpto();
	Einstein.OndeTrabalhaDpto();
	Newton.OndeTrabalhaDpto();
}

Principal::~Principal()
{
}