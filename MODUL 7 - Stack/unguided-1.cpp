#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string kalimat) {
    int awal = 0;
    int akhir = kalimat.length() - 1;

    while (awal < akhir) {
        if (kalimat[awal] != kalimat[akhir]) {
            return false;
        }
        awal++;
        akhir--;
    }
    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}


