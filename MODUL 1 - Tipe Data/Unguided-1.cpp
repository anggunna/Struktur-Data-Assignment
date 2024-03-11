#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi
int hitungLuasPersegi(int sisi) {
    int luas = sisi * sisi;
    return luas;
}

// Fungsi untuk menghitung luas persegi panjang
int hitungLuasPersegiPanjang(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

int main() {
    // Deklarasi variabel
    int sisiPersegi = 5; // Panjang sisi persegi
    int panjangPersegiPanjang = 6; // Panjang persegi panjang
    int lebarPersegiPanjang = 4; // Lebar persegi panjang

    // Memanggil fungsi untuk menghitung luas persegi
    int luasPersegi = hitungLuasPersegi(sisiPersegi);

    // Memanggil fungsi untuk menghitung luas persegi panjang
    int luasPersegiPanjang = hitungLuasPersegiPanjang(panjangPersegiPanjang, lebarPersegiPanjang);

    // Menampilkan hasil perhitungan
    std::cout << "Luas persegi: " << luasPersegi << std::endl;
    std::cout << "Luas persegi panjang: " << luasPersegiPanjang << std::endl;

    return 0;
}

