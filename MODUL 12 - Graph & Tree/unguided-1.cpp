#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function untuk menampilkan graf
void tampilGraph_2311110022(const vector<string>& simpul, const vector<vector<int>>& busur) {
    cout << setw(10) << " ";
    for (const auto& s : simpul) {
        cout << setw(10) << s;
    }
    cout << endl;

    // Menampilkan baris-baris
    for (int i = 0; i < simpul.size(); i++) {
        cout << setw(10) << simpul[i];
        for (int j = 0; j < simpul.size(); j++) {
            cout << setw(10) << busur[i][j];
        }
        cout << endl;
    }
}
1

int main() {
    int jumlahSimpul; // Menambah simpul
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    vector<string> simpul(jumlahSimpul);
    vector<vector<int>> busur(jumlahSimpul, vector<int>(jumlahSimpul, 0));

    cout << "Silakan masukkan nama simpul:" << endl; // Menambah nama simpul
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    cout << "Silakan masukkan bobot antar simpul:" << endl; // Menambah bobot antar simpul
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << simpul[i] << " --> " << simpul[j] << " = ";
            cin >> busur[i][j];
        }
    }

    // Menampilkan graf yang telah dimasukkan
    cout << endl << "Graf yang telah dimasukkan:" << endl;
    tampilGraph_2311110022(simpul, busur);

    return 0;
}
