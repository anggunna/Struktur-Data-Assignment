#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<string> &names) {
    int n = names.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Membandingkan dua string secara leksikografis
            if (names[j] > names[j + 1]) {
                // Menukar posisi jika urutan tidak benar
                swap(names[j], names[j + 1]);
            }
        }
    }
}

int main() {
    // Daftar nama
    vector<string> names = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    // Mengurutkan nama menggunakan Bubble Sort
    bubbleSort(names);

    // Mencetak nama yang sudah diurutkan
    cout << "Nama yang sudah diurutkan:" << endl;
    for (const string& name : names) {
        cout << name << endl;
    }

    return 0;
}
