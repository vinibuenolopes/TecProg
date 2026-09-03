#include "Bibliotecas.h"
#include "Universidade.h"

Universidade::Universidade(const char* n)
{
	strcpy(nome, "");
	depto = nullptr;
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