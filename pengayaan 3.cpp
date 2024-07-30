#include <iostream>

using namespace std;

int faktorial(int n){

    if(n==0||n==1){
        return 1;
    }
    else{
    return n* faktorial(n-1);
    }
}

int main (){
    int number;
    system("cls");
    cout << "massukan angka : ";
    cin >> number;

    long long int result = faktorial(number);
    cout<< "\n nilai faktorial dari " << number << " adalah "<< result<<endl; 
}
