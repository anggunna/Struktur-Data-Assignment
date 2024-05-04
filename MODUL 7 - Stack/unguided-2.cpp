#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

// Fungsi untuk membalikkan kalimat
string reverseSentence(string sentence) {
    stack<string> wordsStack;
    stringstream ss(sentence);
    string word, reversedSentence;

    // Memisahkan kalimat menjadi kata-kata dan memasukkannya ke dalam stack
    while (ss >> word) {
        wordsStack.push(word);
    }

    // Mengeluarkan kata-kata dari stack untuk membentuk kalimat terbalik
    while (!wordsStack.empty()) {
        reversedSentence += wordsStack.top() + " ";
        wordsStack.pop();
    }

    return reversedSentence;
}

int main() {
    string sentence;

    // Menerima input kalimat dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    // Memanggil fungsi untuk membalikkan kalimat
    string reversedSentence = reverseSentence(sentence);

    // Menampilkan kalimat terbalik
    cout << "Kalimat terbalik: " << reversedSentence << endl;

    return 0;
}
