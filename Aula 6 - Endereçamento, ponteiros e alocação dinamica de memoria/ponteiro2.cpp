#include <iostream>

using namespace std;

int main()
{
	char c;
	char *pc = &c;
	
	for(c ='A'; c<='Z';c++)
		cout << *pc << " ";
	
	return 0;
}