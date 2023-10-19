#include <iostream>

using namespace std;

struct aluno
{
	char nome[30];
	int mat;
};

void mostrar_aluno(aluno *ptr)
{
	cout << "NOME: " << ptr->nome << " "
		 << "    MATRICULA: " << ptr->mat << "\n";	
}

int main()
{
	aluno alunos[] = {{"Gabriel Reis", 1234},
                      {"Joao Paulo",4321}};
	aluno *p;
	p = alunos;
	
	for(int i = 0; i<2; i++, p++)
		mostrar_aluno(p);
	
	return 0;
}