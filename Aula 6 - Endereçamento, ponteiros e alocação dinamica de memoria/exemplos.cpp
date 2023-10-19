#include <iostream> 

using namespace std;

int increment5(int *i)
{
	*i = *i +5;
}

float exemplo(int i, int j)
{
	return 3.14159 * i * i * j;
}

struct aluno
{
	char nome[30];
	int mat;
};

void mostrar_aluno(aluno *ptr)
{
	cout << "NOME: " << ptr->nome << " "
		 << "MATRICULA: " << ptr->mat << "\n";	
}

int main()
{
	int n =75;
	
	int& r = n;
	
	cout << n <<" "<< r << " "<< &n << " "<< &r << endl;
	
	
	int* p = &n;
	
	cout << n << " " << &n << " " << p << " " << *p << " " << &p << endl; 
	
	char c;
	char *pc = &c;
	
	for(c ='A'; c<='Z';c++)
		cout << *pc << " ";
	cout << endl;
	
	char c = 'z';
	char* pc = &c;
	char** ppc = &pc;
	char*** pppc = &ppc;
	***pppc = 'a';
	
	int lista[6] = {10,20,30,40,50,0};
	cout << lista[0] << " " << *lista << endl;
	cout << lista[1] << " " << *(lista+1) << endl;
	
	int *plista;
	plista = &lista[0];
	
	while(*plista) cout << *plista++ << endl;
	
	int i = 10;
	increment5(&i);
	cout << i << endl;
	
	float (*p)(int i,int j);
	p = exemplo;
	
	cout << p(12,45);
	
	aluno alunos[] = {{"asdfdsa", 111},{"kjkjhk",38}};
	aluno *p;
	p = alunos;
	for(int i = 0; i<2; i++, p++)
		mostrar_aluno(p);

	return 0;
}