#include <iostream>

using namespace std;

int main()
{
	int lista[5] = {10,20,30,40,50};
	cout << lista[0] << " " << *lista << endl;
	cout << lista[1] << " " << *(lista+1) << endl;
	
	return 0;
}