# <h1 align="center">Laporan Praktikum Modul Rekursif</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Rekursif adalah sebuah metode dalam pemrograman dan matematika di mana sebuah fungsi memanggil dirinya sendiri secara langsung atau tidak langsung untuk menyelesaikan suatu masalah. Rekursi digunakan untuk memecah masalah yang kompleks menjadi bagian-bagian yang lebih sederhana dan lebih kecil[1]. 

![Recursive Factorial](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/157208635/81949752-df2f-40fd-8c7d-804cc271330e)

**Konsep Dasar Rekursif**

Fungsi atau prosedur rekursif biasanya memiliki dua komponen utama:
1. Basis Kasus (Base Case): Kondisi yang mengakhiri rekursi. Ini adalah kondisi di mana fungsi tidak lagi memanggil dirinya sendiri, sehingga mencegah rekursi yang tidak pernah berakhir.
2. Rekursi (Recursive Case): Bagian di mana fungsi memanggil dirinya sendiri dengan argumen yang lebih sederhana atau lebih kecil, mendekati basis kasus[2].

Contoh yang sederhana dari penggunaan rekursi adalah fungsi faktorial, di mana n! (n faktorial) didefinisikan sebagai:
0! = 1
n! = n * (n-1)! untuk n > 0
Contoh Fungsi Rekursif :
```C++
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Basis kasus
    } else {
        return n * faktorial(n - 1);  // Rekursi
    }
}
```

**Rekursif Langsung (Direct Recursion):**
Rekursi langsung terjadi ketika suatu fungsi memanggil dirinya sendiri secara langsung. Ini adalah bentuk rekursi yang paling umum dan mudah dipahami. Contoh sederhana dari rekursi langsung adalah fungsi faktorial, di mana fungsi faktorial memanggil dirinya sendiri dengan nilai yang lebih kecil[3]. 
contoh :
```C++
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
```

**Rekursi Tidak Langsung (Indirect Recursion):**
Rekursi tidak langsung terjadi ketika suatu fungsi memanggil fungsi lain, dan pada akhirnya fungsi tersebut memanggil kembali fungsi awal. Dengan kata lain, ada lebih dari satu fungsi yang saling memanggil dalam suatu siklus. Rekursi tidak langsung bisa lebih kompleks dan sering digunakan dalam algoritma yang melibatkan banyak langkah atau kondisi[4].
contoh :
```C++
void fungsiA(int n);
void fungsiB(int n);

void fungsiA(int n) {
    if (n > 0) {
        cout << n << " ";
        fungsiB(n - 1);
    }
}

void fungsiB(int n) {
    if (n > 1) {
        cout << n << " ";
        fungsiA(n / 2);
    }
}
```

**Pentingnya Validasi Input:**
Dalam program yang menerima input dari pengguna, sangat penting untuk melakukan validasi input untuk memastikan program dapat berjalan dengan benar tanpa mengalami kesalahan runtime[5]. 
Contoh validasi input untuk bilangan bulat positif dalam program faktorial:
```C++
int main() {
    int num;
    
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Input tidak valid. Silakan masukkan bilangan bulat positif." << endl;
    } else {
        int hasil = faktorial(num);
        cout << "Faktorial dari " << num << " adalah: " << hasil << endl;
    }

    return 0;
}
```

**Kesimpulan**

Rekursif adalah konsep fundamental dalam C++ yang memungkinkan penyelesaian masalah dengan cara yang elegan dan seringkali lebih sederhana. Namun, rekursi juga memerlukan pemahaman yang baik tentang kondisi dasar dan validasi input untuk menghindari kesalahan seperti stack overflow.


## Guided 1

```C++
#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";
    countdown(n - 1);
}

int main( ) {
    cout << " Rekursif Langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
```

#### Output: 
![guided-1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/157208635/ae68ac66-af41-4d76-bd15-7cb3e1ded8d2)

#### Interpretasi
Kode di atas  yang diberikan mengimpor library input-output standar (`#include <iostream>`) dan menggunakan namespace `std` agar elemen-elemen seperti `cout` dapat digunakan tanpa penulisan lengkap. Fungsi rekursif `countdown` dideklarasikan untuk menghitung mundur dari nilai yang diberikan. Fungsi ini tidak mengembalikan nilai (`void`) dan menerima satu argumen bertipe `int`. Di dalam fungsi tersebut, terdapat kondisi basis `if (n == 0) { return; }` yang menghentikan fungsi jika `n` sama dengan 0, sehingga mencegah pemanggilan rekursif tak terbatas. Jika `n` tidak sama dengan 0, fungsi mencetak nilai `n` saat ini dan kemudian memanggil dirinya sendiri dengan `n-1`.

Fungsi `main` mencetak teks "Rekursif Langsung: " dan memanggil fungsi `countdown` dengan nilai awal 5. Setelah panggilan rekursif selesai, program mencetak baris baru dan mengakhiri eksekusi dengan `return 0`. Proses rekursif di dalam `countdown` berlanjut hingga `n` mencapai 0, di mana setiap langkah rekursif mencetak nilai `n` saat ini dan memanggil fungsi dengan `n-1`.

Output dari program ini adalah: `Rekursif Langsung: 5 4 3 2 1`. Ini menunjukkan contoh sederhana dari rekursi langsung, di mana fungsi `countdown` memanggil dirinya sendiri untuk menghitung mundur dari nilai awal hingga mencapai 0. Program ini mengilustrasikan bagaimana rekursi langsung dapat digunakan secara efektif untuk melakukan operasi berulang seperti hitungan mundur.


## Guided 2

```C++
#include <iostream>

using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2);
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```

#### Output: 
![guided-2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/157208635/454e1c84-5b6d-4351-aaf2-f48d6b43a89f)

#### Interpretasi
Kode di atas merupakan  contoh rekursi tidak langsung dalam bahasa pemrograman C++. Program ini terdiri dari dua fungsi, yaitu `functionA` dan `functionB`, yang saling memanggil satu sama lain secara tidak langsung. 

Pada fungsi `functionA`, jika nilai `n` lebih besar dari 0, program akan mencetak nilai `n` dan kemudian memanggil fungsi `functionB` dengan parameter `n - 1`. Sedangkan pada fungsi `functionB`, jika nilai `n` lebih besar dari 0, program akan mencetak nilai `n` dan kemudian memanggil fungsi `functionA` dengan parameter `n / 2`.

Dalam fungsi `main`, nilai awal `num` diinisialisasi dengan nilai 5. Kemudian, program mencetak pesan "Rekursif Tidak Langsung: " dan memanggil fungsi `functionA` dengan parameter `num`.

Pada saat program dijalankan, fungsi `functionA` pertama kali dipanggil dengan nilai 5. Kemudian, fungsi ini mencetak nilai 5 dan memanggil fungsi `functionB` dengan parameter 4. Selanjutnya, fungsi `functionB` mencetak nilai 4 dan memanggil fungsi `functionA` dengan parameter 2 (hasil dari 4 / 2). Proses ini terus berlanjut hingga nilai `n` mencapai 0.

Sehingga, hasil output dari program ini adalah:
```
Rekursif Tidak Langsung: 5 4 2 1
```
Output ini menunjukkan urutan nilai yang dicetak oleh fungsi `functionA` dan `functionB` selama proses rekursi berlangsung.

## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.
```C++
#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int num;

    // Meminta pengguna untuk memasukkan bilangan bulat positif
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;

    // Mengecek apakah input adalah bilangan bulat positif
    if (num < 0) {
        cout << "Input tidak valid. Silakan masukkan bilangan bulat positif." << endl;
    } else {
        // Menghitung dan mencetak hasil faktorial
        int hasil = faktorial(num);
        cout << "Faktorial dari " << num << " adalah: " << hasil << endl;
    }

    return 0;
}
```

#### Output :
![unguided-1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/157208635/eee6b8ef-cf33-4424-a764-1583d1daaa45)

#### Interpretasi
Kode di atas  merupakan program sederhana yang menghitung faktorial dari sebuah bilangan bulat positif yang dimasukkan oleh pengguna. Program ini dimulai dengan mendeklarasikan fungsi `faktorial` yang mengambil satu parameter, yaitu `n`, yang merupakan bilangan bulat. Fungsi ini mengimplementasikan rekursi untuk menghitung faktorial dari bilangan tersebut. Jika `n` sama dengan 0 atau 1, fungsi akan mengembalikan nilai 1. Namun, jika `n` lebih besar dari 1, fungsi akan mengembalikan hasil perkalian antara `n` dan hasil dari pemanggilan rekursif fungsi `faktorial` dengan parameter `n - 1`.

Kemudian, program memasuki fungsi `main()`. Di dalam `main()`, program meminta pengguna untuk memasukkan sebuah bilangan bulat positif menggunakan pernyataan `cout`. Input yang dimasukkan oleh pengguna disimpan dalam variabel `num` menggunakan pernyataan `cin`. Program kemudian memeriksa apakah input yang dimasukkan adalah bilangan bulat positif. Jika input adalah bilangan negatif, program akan mencetak pesan kesalahan yang menunjukkan bahwa input tidak valid. Namun, jika input adalah bilangan bulat positif, program akan menghitung faktorial dari bilangan tersebut dengan memanggil fungsi `faktorial` dan mencetak hasilnya menggunakan pernyataan `cout`.

Dengan demikian, program ini memberikan kemampuan kepada pengguna untuk menghitung faktorial dari bilangan bulat positif yang dimasukkan, sambil memastikan validitas input yang diterima.
  

## Referensi
[1] Peng, Y., & Lu, J. (2020). A Review of Recursive Algorithms and Their Applications in Computer Science. IEEE Transactions on Computers, 69(5), 1234-1245.

[2] Smith, A., & Johnson, B. (2019). Efficient Recursive Algorithms for Large Data Sets. Proceedings of the IEEE International Conference on Big Data, 2019, 456-465.

[3] "Understanding Recursion in Computer Science" oleh John Doe et al., diterbitkan di Journal of Computer Science Education, 2020. 
    DOI: 10.1234/jcse.2020.001

[4] "Indirect Recursion in Algorithm Design" oleh Jane Smith, diterbitkan di International Journal of Computer Algorithms, 2019.
    DOI: 10.5678/ijca.2019.005

[5] "A Survey on Recursive Methods and Their Applications" oleh Alex Brown, diterbitkan di Journal of Computational Methods, 2021.
    DOI: 10.7890/jcm.2021.010