# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori

## Variabel
  Format penulisan variabel pada sebuah program yaitu , tipe data => nama variabel. Contoh, “int usia”, “float keliling lingkaran”, “char jenis kelamin”, “string namaKota”. Jika diinginkan sebuah variabel menampung lebih dari satu nilai maka deklarasikan variabel sebagai array, dengan format penulisan tipe data => nama_variabel (banyak data) [1]. Variabel juga dibagi menjadi dua sesuai penggunaannya, yaitu variabel global dan variabel local. Variabel global merupakan variabel yang bisa digunakan semua function di dalam satu file, dan penulisan atau pendeklarasian variabel global berada di luar function. Sedangkan variabel lokal merupakan variabel yang dideklarasikan di dalam sebuah function dan hanya dapat dijalankan di function yang dideklarasikan variabel tersebut [2].


## Struktur (Struct)
  Struct merupakan sebuah tipe data bentukan yang digunakan untuk menampung / mengelompokkan beberapa tipe data standar maupun tipe data bentukan lainnya yang sudah didefinisikan sebelumnya. Pada struct ini dapat menyimpan berbagai tipe data yang berbeda jenis. Untuk keyword yang digunakan untuk membuat/mendeklarasikan sebuah struktur yaitu menggunakan keyword struct [3]. Struct merupakan keyword yang memungkinkan membuat deklarasi yang di dalamnya dapat terdapat banyak   variabel,   hasil   deklarasi   ini   akan   menghasilkan user-defined   data type yaitu tipe structure yang berguna untuk mendirikan object. Struct dapat mengelompokkan data/variabel - variabel dan fungsi - fungsi yang saling berhubungan dalam satu nama.Variabel - variabel di dalam struct dapat disebut dengan anggota dari struct. Anggota dari struct dapat memiliki tipe data yang berbeda satu sama lain. Tidak seperti array yang semua anggotanya memiliki tipe data yang sama. Struct menjadi tipe data baru yang mengelompokkan anggota anggotanya. Lalu, anggotanya dapat diakses melalui struct tersebut [4].


## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.
![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/03d176c5-5886-46fe-8aa4-5d7c0ae6c249)

#### Output: 
![guided-1 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/0834a042-790f-414e-8853-51245dc0a4b2) 

#### Interpretasi
Kode program C++ diatas merupakan kode program contoh penggunaan strukutur. Pada kode program diatas saya menggunakan format penulisan pertama dengan nama struct yaitu buku. Dalam buku ini terdapat variabel-variabel lain didalamnya yaitu variabel judul buku, pengarang, penerbit, tebal halaman dan harga buku. Untuk pemanggilan nilai pada variabel yang ada didalam struct yaitu dengan cara namaVariabelstruct=> (.) => nama variabel yang di dalam struct.


### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/949eca30-c477-4639-8177-2ae94266c0d6)

#### Output :
![guided-2 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/4836d126-4cae-4869-ad47-6a87cf8d2a19)

#### Interpretasi
Kode program C++ diatas merupakan kode program pemanggilan 3 buah struct, yaitu hewan, hewan darat dan hewan laut. Pada setiap struct tersebut memiliki variabel masing-masing yang sudah ditetapkan sebelumnya. Untuk memanggil nilai variabel pada sebuah struct, langkah pertama yaitu dengan membuat nama pemanggil terlebih dahulu di fungsi main dengan format struct nama_pemanggil. Setelah membuat nama_pemanggil maka pemanggilan nilai pada variabel struct bisa dilakukan. Pemanggilan nilai variabel pada struct menggunakan format nama_pemanggil > (.) > nama_variabel.



## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/110d05df-a007-4a1b-a35d-fd8d4ba341c5)

#### Output :
![unguided (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/bdac1e23-9afd-4ca4-a6ba-d99bb6b1ed28)

#### Interpretasi
Kode program C++ diatas merupakan kode program penerapan struct dengan isi dari struct berupa array dengan ukuran 5. Jadi untuk setiap variabel nilai yang terdapat di struct masing-masing memiliki 5 data. Penginisiasian nilai yang saya lakukan diatas menggunakan cara manual dengan memberi nilai pada variabel array satu persatu sesuai dengan indeks nya mulai dari indeks 0 sampai indeks ke-4. Kemudian untuk pemanggilan saya menggunakan perulangan for untuk meningkatkan efisiensi program, penulisan pemanggilan ini dilakukan dengan memanggil nama variabel struct dengan indeks sesuai perulangan yang sudah di tetapkan, indeks perulangan mulai dari 0-4 dan dilanjut nama variabel yang ada di struct.

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided 1, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?
![unguided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/70ad0627-379b-4e02-9d0f-e354dbd19461)

#### Output :
![unguided (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/bdac1e23-9afd-4ca4-a6ba-d99bb6b1ed28)

#### Interpretasi
Kode program C++ diatas merupakan kode program penerapan struct dengan isi dari struct berupa array dengan ukuran 5. Jadi untuk setiap variabel nilai yang terdapat di struct masing-masing memiliki 5 data. Penginisiasian nilai yang saya lakukan diatas menggunakan cara manual dengan memberi nilai pada variabel array satu persatu sesuai dengan indeks nya mulai dari indeks 0 sampai indeks ke-4. Kemudian untuk pemanggilan saya menggunakan perulangan for untuk meningkatkan efisiensi program, penulisan pemanggilan ini dilakukan dengan memanggil nama variabel struct dengan indeks sesuai perulangan yang sudah di tetapkan, indeks perulangan mulai dari 0-4 dan dilanjut nama variabel yang ada di struct.


## Kesimpulan :
  Variabel merupakan sebuah tempat atau wadah yang digunakan untuk menyimpan suatu nilai. Variabel memiliki sebuah aturan atau sifat, yaitu variabel hanya digunakan untuk menyimpan sebuah data atau nilai sementara, variabel hanya mampu menyimpan satu data atau nilai saja, penggunaan atau pemanggilan sebuah variabel harus sama dengan nama yang dideklarasikan sebelumnya, dan variabel yang diisi dengan sebuah nilai dapat diisi menggunakan operator sama degan “=” . Didalam pembuatan variabel dipastikan masing-masing variabel menggunakan tipe data yang ada sebagaia syarat utamanya.
  Dalam struct sendiri memiliki hubungan / keterikatan yang erat dengan variabel, karena struct sendiri berguna menyimpan variabel-variabel dengan berbagai macam tipe data. Struct merupakan sebuah tipe data bentukan yang digunakan untuk menampung / mengelompokkan beberapa tipe data standar maupun tipe data bentukan lainnya yang sudah didefinisikan sebelumnya. Pada struct ini dapat menyimpan berbagai tipe data yang berbeda jenis.



## Referensi
[1] Ahmad Muhardian. (2017). Mengenal Variabel dan Tipe Data. September 29, 2017, from https://www.petanikode.com/cpp-variabel/

[2] Materidosen.com. (2017, March 19). Perbedaan Variabel Global dan Variabel Lokal, Lengkap Contoh dan Penjelasan. Retrieved from https://www.materidosen.com/2017/03/perbedaan-variabel-global-dan-variabel.html

[3] Pakkoding.id. (2020, June 17). Mengenal Tipe Data Struct dalam C++ (Disertai Gambar & Video Penjelasan). Retrieved from https://pakkoding.id/2020/06/17/mengenal-tipe-data-struct-dalam-c/

[4] Belajarcpp.com. (2024, April 2). Penjelasan dan Cara Mendirikan Struct - Belajar C++. Retrieved from https://www.belajarcpp.com/tutorial/cpp/struct/


