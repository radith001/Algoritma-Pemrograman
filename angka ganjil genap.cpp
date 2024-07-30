#include <iostream>

using namespace std;

int main()
{
	int batas;
	cout << " Masukan Batas Angka : ";
	cin >> batas;
	
	cout << " Angka Ganjil : ";
	for(int i=1; i<=batas; i++)
	{
		if(i%2!=0)
		{
			cout << i << " ";
		}
	}
	
	cout << " \nAngka Genap : ";
	for(int i=1; i<=batas; i++)
	{
		if(i%2==0)
		{
			cout << i << " ";
			
		}
	}
	
	return 0;
}
