#include "Bibliotecas.h"
#include "Universidade.h"

Universidade::Universidade()
{
	strcpy(nome, "");
}

Universidade::~Universidade()
{
}

void Universidade::setNome(const char* n)
{
	strcpy(nome, n);
}

char* Universidade::getNome()
{
	return nome;
}

void Universidade::setDepartamento(Departamento* pdep, int ctd) 
{
	pDptos[ctd] = pdep;
}

void Universidade::imprimeDptos() {
	for (int i = 0; i < 50; i++) {
		if (pDptos[i] != NULL)
			cout << pDptos[i]->getNome() << endl;
	}
}