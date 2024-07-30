#include <iostream>
#include <string>

int main() 
{
    std::string namaHari[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    
    for(int i = 0; i <7; i++)
    {
    	 std::cout << "Hari ini adalah hari " << namaHari[i] << std::endl;
	}

    return 0;
}



