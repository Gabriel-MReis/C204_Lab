#include <iostream>

using namespace std;

int main()
{
	int n = 75;
	int& r = n;
	
	cout << "n= " << n << " &n= " << &n	<< "\n" << "r= " << r << " &r= " << &r;
	
	return 0;
} 