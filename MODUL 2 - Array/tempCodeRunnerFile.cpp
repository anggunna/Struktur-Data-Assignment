#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string data_array;
    cout << "Masukkan data array (pisahkan dengan spasi): ";
    getline(cin, data_array);

    stringstream ss(data_array);
    vector<int> data_list;
    int num;

    // Membaca data array dan menyimpannya dalam vektor
    while (ss >> num) {
        data_list.push_back(num);
    }

    vector<int> genap;
    vector<int> ganjil;

    // Memisahkan nomor genap dan ganjil
    for (int i = 0; i < data_list.size(); ++i) {
        if (data_list[i] % 2 == 0) {
            genap.push_back(data_list[i]);
        } else {
            ganjil.push_back(data_list[i]);
        }
    }

    // Menampilkan output
    cout << "Data Array: ";
    for (int i = 0; i < data_list.size(); ++i) {
        cout << data_list[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int i = 0; i < genap.size(); ++i) {
        cout << genap[i];
        if (i != genap.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < ganjil.size(); ++i) {
        cout << ganjil[i];
        if (i != ganjil.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}