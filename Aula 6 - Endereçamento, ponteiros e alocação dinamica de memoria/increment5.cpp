#include <iostream>

using namespace std;

void increment5(int *i)
{
	*i = *i +5;
}

int main()
{
	int i = 10;
	
	increment5(&i);
	
	cout << i << endl;
	
	return 0;
}