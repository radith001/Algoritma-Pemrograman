#include <iostream>
using namespace std;

void displayArray(int *arr, int n) {
    if (n == 0) {
        cout << "Array kosong." << endl;
        return;
    }
    cout << "Nilai dalam array: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int findMax(int *arr, int n) {
    if (n == 0) return -1; // atau nilai lain yang menandakan array kosong
    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int findMin(int *arr, int n) {
    if (n == 0) return -1; // atau nilai lain yang menandakan array kosong
    int min = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    return min;
}

void sortArrayAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void sortArrayDescending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) < *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "Masukkan panjang array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Panjang array harus lebih dari 0." << endl;
        return 1;
    }

    int arr[n];

    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    displayArray(arr, n);

    int total = sumArray(arr, n);
    cout << "Jumlah total nilai dalam array: " << total << endl;

    int max = findMax(arr, n);
    cout << "Nilai maksimum dalam array: " << max << endl;

    int min = findMin(arr, n);
    cout << "Nilai minimum dalam array: " << min << endl;

    sortArrayAscending(arr, n);
    cout << "Array yang diurutkan secara ascending: ";
    displayArray(arr, n);

    sortArrayDescending(arr, n);
    cout << "Array yang diurutkan secara descending: ";
    displayArray(arr, n);

    return 0;
}

