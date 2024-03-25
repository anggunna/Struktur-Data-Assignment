# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama [1].

## Array Satu Dimensi
Array satu dimensi yaitu kumpulan elemen-elemen identik yang hanya terdiri dari satu baris atau hanya satu kolom saja alamat penyimpanan data (indeks). Elemen-elemen tersebut memiliki tipe data yang sama, tetapi isi dari elemen tersebut boleh berbeda [2].

Dalam bahasa pemrograman C++, tanda [ ] (kurung siku) digunakan untuk mendeklarasikan array satu dimensi. Format umum pendeklarasian array satu dimensi adalah sebagai berikut:
tipe_data nama_array[jumlah_elemen];

Misalnya, jika kita ingin membuat sebuah array satu dimensi dengan nama LARIK yang terdiri dari 10 elemen bertipe data int, pendeklarasian array akan terlihat seperti ini:

int LARIK [10];

Jika kita ingin memberikan nilai awal saat pendeklarasian (inisialisasi), contohnya akan menjadi:

int LARIK [10] = {2, 5, 4, 8, 1, 3, 7, 1, 10, 6};

Dari pendeklarasian dan inisialisasi array LARIK di atas, kita sebenarnya meminta komputer untuk mengalokasikan ruang di memori sebanyak 10 tempat, dengan indeks mulai dari 0 hingga 9. Nilai-nilai tersebut akan diisi ke dalam elemen array secara berurutan, dimulai dari indeks 0 (nilai 2) hingga indeks 9 (nilai 6) [3].

### Array Dua Dimensi
Array dua dimensi sering digambarkan sebagai sebuah matriks, merupakan perluasan dari array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dan beberapa kolom elemen, maka array dua dimensiterdiri dari beberapa baris dan beberapa kolom elemen bertipe sama sehingga dapat digambarkan [2].

Untuk mendeklarasikan sebuah array dua dimensi dalam bahasa pemrograman C++, penggunaan tanda [ ] (kurung siku) diperlukan. Format umum pendeklarasian array dua dimensi adalah sebagai berikut:
tipe_data nama_array[jumlah_elemen_baris][jumlah_elemen_kolom];

Misalnya, jika kita ingin mendeklarasikan sebuah array dua dimensi dengan nama LARIK yang memiliki 3 baris dan 5 kolom, dan bertipe data int, maka pendeklarasian array akan terlihat seperti ini:
int LARIK [3][5];

Jika kita ingin memberikan nilai awal saat pendeklarasian (inisialisasi), contohnya akan seperti ini:
int LARIK [3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};

Dari pendeklarasian dan inisialisasi array LARIK di atas, kita meminta komputer untuk mengalokasikan ruang di memori sebanyak 15 tempat, dengan indeks dimulai dari LARIK[0][0] hingga LARIK[2][4]. Nilai-nilai tersebut akan dimasukkan ke dalam elemen array secara berurutan, dimulai dari LARIK[0][0] yang akan diisi dengan nilai 1, hingga LARIK[2][4] yang akan diisi dengan nilai 15 [4]. 

### Array MultiDimensi
Array ini seperti array dimensi dua tetapi dapat memiliki ukuran yang lebih besar. Sebenarnya array dimensi banyak ini tidak terlalu sering digunakan, tetapi sewaktu-waktu kalau dimensi yang dibutuhkan banyak, maka array ini sangat memegang peranan yang penting[2].

Array multidimensi umumnya merujuk pada array yang memiliki lebih dari dua subskrip. Pendeklarasian array multidimensi memiliki format yang sama dengan pendeklarasi array satu dimensi atau dua dimensi. Sebagai contoh, untuk mendeklarasikan array multidimensi dengan tiga subskrip (atau disebut juga array tiga dimensi), dengan nama LARIK, yang memiliki ukuran 1 sebanyak 2, ukuran 2 sebanyak 3, dan ukuran 3 sebanyak 4, serta bertipe data int, pendeklarasiannya akan seperti berikut:

tipe_data nama_array[ukuran_1][ukuran_2]...[ukuran_N];

int LARIK[2][3][4];

int LARIK[2][3][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}}, {{13,14,15,16},{17,18,19,20},{21,22,23,24}}};

Dari pendeklarasian dan inisialisasi array LARIK di atas, kita mengalokasikan ruang di memori sebanyak 24 tempat, dengan indeks dimulai dari LARIK[0][0][0] hingga LARIK[1][2][3]. Nilai-nilai tersebut akan dimasukkan ke dalam elemen array secara berurutan, dimulai dari LARIK[0][0][0] yang akan diisi dengan nilai 1, hingga LARIK[1][2][3] yang akan diisi dengan nilai 24 [5].

## Guided 
## Guided-1
### Input
![guided-1(input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/ef2f6d33-9ddc-4d0c-a60f-ef6ab0887912)
### Output
![guided-1(output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/d49f31d6-89e1-4e4e-b201-2b6944ef951b)
Kode tersebut merupakan untuk meminta pengguna memasukkan nilai-nilai ke dalam array tiga dimensi, kemudian menampilkan kembali nilai-nilai tersebut. Program tersebut menggunakan tiga loop bersarang untuk iterasi melalui semua elemen array dan memungkinkan pengguna memasukkan nilai. Setelah semua nilai dimasukkan, program menampilkan kembali nilai-nilai array tersebut ke layar.
Lebih ringkasnya, program ini:
1. Meminta pengguna memasukkan nilai-nilai ke dalam array tiga dimensi.
2. Menampilkan kembali nilai-nilai array yang dimasukkan oleh pengguna.

Kesimpulan: Program ini memberikan pengguna kemampuan untuk memasukkan dan menampilkan nilai-nilai dalam array tiga dimensi. Program ini menggunakan loop bersarang untuk mengakses dan menampilkan setiap elemen array secara efisien.

## Guided-2
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/3ced6f17-1a5e-47b7-8409-b25de86f2382)
Kode tersebut merupakan untuk meminta pengguna memasukkan nilai-nilai ke dalam array, kemudian mencari nilai maksimum dari array tersebut dan menampilkan nilai maksimum beserta posisinya dalam array.
Lebih ringkasnya, program ini:
1. Meminta pengguna memasukkan panjang array dan nilai-nilai untuk setiap elemen array.
2. Menggunakan loop untuk mencari nilai maksimum dari array dan menyimpannya beserta posisinya.
3. Menampilkan nilai maksimum beserta posisinya dalam array.

Kesimpulan: Program ini memberikan pengguna kemampuan untuk memasukkan nilai-nilai ke dalam array dan menemukan nilai maksimum dari array tersebut. Program ini menggunakan loop untuk mencari nilai maksimum dan menyajikannya dalam output.


## Unguided 

### 1. [Soal]
![soal-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/911e1239-4376-48fd-9468-029579aa0800)

#### Input:
![unguided-1(input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/efc7abfb-e6e8-49c2-9a38-b4eb6733b46d)

#### Output:
![unguided-1(output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/8b3db594-3ea3-490f-add8-5d05efe30a6f)

#### Kesimpulan :
Kode tersebut adalah program C++ yang meminta pengguna memasukkan data array dalam satu baris, kemudian memisahkan nomor genap dan ganjil dari data tersebut, dan menampilkan kembali data array, nomor genap, dan nomor ganjil.

Lebih ringkasnya, program ini:
1. Meminta pengguna memasukkan data array dalam satu baris.
2. Memisahkan nomor genap dan ganjil dari data array.
3. Menampilkan kembali data array, nomor genap, dan nomor ganjil.


### 2. [Soal]
![soal-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/6af39ffd-0777-48e1-b283-e60268c7c04c)

#### Input
![unguided-2(input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/63a70d00-982f-4c0f-9541-97172c62e7bf)

#### Output:
![unguided-2(output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/8a8c7bec-58a9-44c9-a227-8b278c1511d1)

#### Kesimpulan :
Kode tersebut adalah program sederhana dalam bahasa C++ untuk mencari nilai maksimum dari sebuah array yang dimasukkan oleh pengguna.

Lebih ringkasnya, program ini:
1. Meminta pengguna memasukkan panjang array.
2. Meminta pengguna memasukkan nilai untuk setiap elemen array.
3. Mencari nilai maksimum dari array yang dimasukkan.
4. Menampilkan nilai maksimum beserta posisinya dalam array.


### 3. [Soal]
![soal-3](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/2ecf39d2-5612-4444-ae55-878553a3e075)

#### Input:
![unguided-3(input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/4885d8f4-3b62-43e0-8e6c-f76ec319f3c8)

#### Output:
![unguided-3(output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/103c518a-c690-4a89-a79c-82b1137685f7)

## Kesimpulan
Kode tersebut adalah program C++ yang memungkinkan pengguna untuk memasukkan ukuran array, elemen-elemen array, dan kemudian memilih untuk mencari nilai maksimum, minimum, atau rata-rata dari array tersebut.

Lebih ringkasnya, program ini:
1. Meminta pengguna memasukkan ukuran array dan elemen-elemen array.
2. Menampilkan menu yang berisi pilihan untuk mencari nilai maksimum, minimum, atau rata-rata dari array.
3. Meminta pengguna memilih operasi yang ingin dilakukan.
4. Menghitung dan menampilkan nilai maksimum, minimum, atau rata-rata dari array sesuai dengan pilihan pengguna.
5. Menampilkan pesan kesalahan jika pilihan pengguna tidak valid.


## Referensi
[1] Pratama, M. A. (2020, March 29). STRUKTUR DATA ARRAY DUA DIMENSI  PADA PEMROGRAMAN C++. https://doi.org/10.31219/osf.io/vyech

[2] lestari, K. (2019, March 29). STUKTUR DATA STATIS ARRAY. https://doi.org/10.31219/osf.io/mx6cp

[3] https://www.materidosen.com/2017/06/array-satu-dimensi-c-lengkap-contoh.html

[4] https://www.materidosen.com/2017/06/array-dua-dimensi-c-lengkap-contoh.html

[5] https://www.materidosen.com/2017/06/array-multidimensi-dimensi-c-lengkap.html
