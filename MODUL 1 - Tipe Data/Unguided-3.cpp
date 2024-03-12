#include <iostream>
#include <vector>
#include <algorithm> // Diperlukan untuk std::transform
#include <iterator> // Diperlukan untuk std::back_inserter

// Fungsi untuk mengalikan setiap elemen vektor dengan 2
int multiplyByTwo(int x) {
    return x * 2;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Menggunakan fungsi map untuk mengalikan setiap elemen dengan 2
    std::vector<int> doubledNumbers;
    std::transform(numbers.begin(), numbers.end(), std::back_inserter(doubledNumbers), multiplyByTwo);

    // Menampilkan hasil
    std::cout << "Hasil perkalian setiap elemen dengan 2:" << std::endl;
    for (int num : doubledNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
