#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar nilai
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Geser elemen array yang lebih besar dari key */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int choice;
    cout << "Pilih metode sorting:" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cin >> choice;

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    switch (choice) {
        case 1:
            bubbleSort(arr, n);
            cout << "Array setelah diurutkan dengan Bubble Sort: \n";
            printArray(arr, n);
            break;
        case 2:
            insertionSort(arr, n);
            cout << "Array setelah diurutkan dengan Insertion Sort: \n";
            printArray(arr, n);
            break;
        default:
            cout << "Pilihan tidak valid";
    }

    return 0;
}
