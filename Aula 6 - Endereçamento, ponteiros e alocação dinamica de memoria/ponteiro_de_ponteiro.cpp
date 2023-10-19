 #include <iostream>

using namespace std;

int main()
{
	char c = 'z';
	char* pc = &c;
	char** ppc = &pc;
	char*** pppc = &ppc;
	***pppc = 'a';
	
	cout << c;
	
	return 0;
}