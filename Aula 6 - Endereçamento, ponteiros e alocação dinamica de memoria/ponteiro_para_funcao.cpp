#include <iostream>

using namespace std;

float exemplo(int i, int j)
{
	return 3.14159 * i * j;
}

int main()
{
	float (*p)(int i,int j);
	p = exemplo;
	
	cout << p(12,45);
	
	return 0;
}