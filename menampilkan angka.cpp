#include <iostream>
using namespace std;

int main()
{
	for (int i=1; i<=10; i++)
	{
		if(i%2!=0)
		{
			cout << " Angka Ganjil " << i << endl;
		} else
		{
			cout << " Angka Genap " << i << endl;
		}
	}
	
	return 0;  
}
