#include <iostream>
#include <limits>
using namespace std;

int main() {
    int size;
    cout << "Masukkan ukuran array: ";
    cin >> size;

    // Meminta pengguna untuk memasukkan elemen-elemen array
    int arr[size];
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan menu
    cout << "\nMenu:\n";
    cout << "1. Maksimum\n";
    cout << "2. Minimum\n";
    cout << "3. Rata-rata\n";

    // Meminta pengguna untuk memilih operasi
    int choice;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> choice;

    // Menghitung nilai maksimum
    if (choice == 1) {
        int max = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "Nilai maksimum dari array adalah: " << max << endl;
    }
    // Menghitung nilai minimum
    else if (choice == 2) {
        int min = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Nilai minimum dari array adalah: " << min << endl;
    }
    // Menghitung rata-rata
    else if (choice == 3) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        double average = static_cast<double>(sum) / size;
        cout << "Rata-rata dari array adalah: " << average << endl;
    }
    // Menampilkan pesan kesalahan jika pilihan tidak valid
    else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
