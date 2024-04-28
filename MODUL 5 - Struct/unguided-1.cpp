#include<iostream>

using namespace std;

struct buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    int harga_buku;
};buku data1[5];

int main(){

    data1[0].judul_buku = "Panduan Praktis Manajemen Keuangan: Strategi Efektif untuk Mengelola Keuangan dengan Bijak";
    data1[1].judul_buku = "Masakan Praktis untuk Anak Kost: Resep Sederhana dan Ekonomis untuk Kehidupan Sehari-hari";
    data1[2].judul_buku = "Melodi Hidup Mark Lee: Perjalanan Seorang Musisi dari NCT";
    data1[3].judul_buku = "Captain Ang";
    data1[4].judul_buku = "Panduan Cara Meluluhkan Do Kyungsoo";

    data1[0].pengarang = "Anggun";
    data1[1].pengarang = "Anggun Chef";
    data1[2].pengarang = "Mark Lee";
    data1[3].pengarang = "Seonana";
    data1[4].pengarang = "Naz";

    data1[0].penerbit = "King El";
    data1[1].penerbit = "b0nacabe";
    data1[2].penerbit = "SM Entertainment";
    data1[3].penerbit = "Captt J";
    data1[4].penerbit = "Anra";

    data1[0].tebal_halaman = 685;
    data1[1].tebal_halaman = 2755;
    data1[2].tebal_halaman = 289;
    data1[3].tebal_halaman = 99;
    data1[4].tebal_halaman = 1000;

    data1[0].harga_buku = 300000;
    data1[1].harga_buku = 199000;
    data1[2].harga_buku = 289000;
    data1[3].harga_buku = 50000;
    data1[4].harga_buku = 250000;
    

    
    for(int i=0; i<5; i++){
    cout<<"Data Buku ke-"<<i+1<<endl;
    cout<<"Judul: "<<data1[i].judul_buku<<endl;
    cout<<"Pengarang: "<<data1[i].pengarang<<endl;
    cout<<"Penerbit: "<<data1[i].penerbit<<endl;
    cout<<"Tebal Halaman: "<<data1[i].tebal_halaman<<endl;
    cout<<"Harga: "<<data1[i].harga_buku<<endl;
    cout<<endl;
    cout<<endl;
    }
    return 0;
}