#include <iostream>
#include <algorithm> // Untuk penggunaan fungsi sort()

using namespace std;

// Fungsi untuk menampilkan karakter sebelum sorting
void displayCharacters(const char characters[], int n) {
    cout << "Karakter sebelum pengurutan: ";
    for (int i = 0; i < n; ++i) {
        cout << characters[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Program untuk mengurutkan karakter secara ascending dan descending" << endl;
    cout << "Masukkan jumlah karakter (n): ";
    cin >> n;

    char characters[n];

    // Meminta pengguna untuk memasukkan karakter sejumlah n
    cout << "Masukkan " << n << " karakter:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> characters[i];
    }

    // Memanggil fungsi untuk menampilkan karakter sebelum pengurutan
    displayCharacters(characters, n);

    // Pengurutan karakter secara menaik (ascending)
    sort(characters, characters + n);

    // Menampilkan hasil pengurutan menaik
    cout << "\nHasil pengurutan menaik (ascending): ";
    for (int i = 0; i < n; ++i) {
        cout << characters[i] << " ";
    }

    // Pengurutan karakter secara menurun (descending)
    sort(characters, characters + n, greater<char>());

    // Menampilkan hasil pengurutan menurun
    cout << "\nHasil pengurutan menurun (descending): ";
    for (int i = 0; i < n; ++i) {
        cout << characters[i] << " ";
    }

    cout << "\nTerima kasih telah menggunakan program pengurutan karakter!\n";
    return 0;
}
