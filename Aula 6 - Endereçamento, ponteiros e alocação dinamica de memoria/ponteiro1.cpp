#include <iostream>

using namespace std;

int main()
{
	int n = 75;
	int *p;
	
	p = &n;
	
	cout << "n= " << n << " &n= " << &n	<< "\n" << "p= " << p << " &p= " << &p << " *p= " << *p;
	
	return 0;
}