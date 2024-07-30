#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;

    cout << "Masukkan panjang array: " ;
    cin >> n;
    
    int arr[n];

	cout << "Masukkan elemen-elemen array: " << endl << endl;
	
    for (int i = 0; i < n; i++) {
		cout << "Elemen ke-" << i+1<<": ";
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Array yang sudah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

