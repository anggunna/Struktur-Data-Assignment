# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori

Stack adalah tipe struktur data yang linier dan mengikuti urutan tertentu. Adapun urutan yang digunakan adalah LIFO (Last In First Out) atau FILO (First In Last Out). Kedua istilah tersebut artinya sama, yaitu data yang terakhir masuk akan menjadi data yang keluar pertama kali. Sebaliknya, data yang pertama masuk akan menjadi data yang keluar terakhir. Stack meliputi konsep utama dari struktur data tersebut, yaitu Last In, First Out (LIFO). Ini berarti elemen terakhir yang dimasukkan ke dalam stack akan menjadi yang pertama dikeluarkan. Prinsip LIFO ini menggambarkan cara stack menyusun elemen-elemennya, mirip dengan menumpuk benda dalam kehidupan sehari-hari, di mana yang terakhir ditambahkan adalah yang pertama diambil. Dua operasi dasar dari stack adalah push, yang menambahkan elemen ke dalam stack, dan pop, yang mengeluarkan elemen dari stack [1]. 

![ilustrasi-stack](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/85a2f306-326d-4670-b696-316c99d9217b)

## Operasi-operasi Dasar pada Stack
Ada beberapa operasi dasar yang bisa kita untuk lakukan terhadap struktur data stack. Operasi-operasi tersebut meliputi :
1. Push: Menyisipkan elemen ke bagian atas stack
2. Pop: Menghapus elemen atas dari stack
3. IsEmpty: Memeriksa apakah stack kosong
4. IsFull: Memerika apakah stack sudah penuh
5. Peek: Mendapatkan nilai elemen teratas tanpa menghapusnya

## Fungsi dan Kegunaan Stack
Adapun fungsi dan kegunaan struktur data stack adalah sebagai berikut:
1. Struktur data stack digunakan dalam evaluasi dan konversi ekspresi aritmatika. Proses ini banyak dipakai untuk program kompiler.
2. Stack digunakan dalam pemrograman rekursi.
3. Digunakan untuk pemeriksaan tanda kurung.
4. Stack digunakan dalam manajemen memori.
5. Dipakai untuk memproses pemanggilan sebuah fungsi [2].

## Keunggulan menggunakan stack:
1. Dapat mengelola data secara efisien.
2. Bisa membersihkan objek secara otomatis.
3. Dapat mengontrol memori dengan mandiri.

## Kekurangan menggunakan stack:
1. Kapasitas memori yang sangat terbatas.
2. Kemungkinan terjadi overflow ketika jumlah objek terlalu banyak.
3. Tidak dapat mengakses data secara acak [3].

Stack dapat diimplementasikan menggunakan array atau linked list. Dalam implementasi menggunakan array, elemen-elemen stack disimpan dalam array dan operasi push dan pop mengubah indeks yang menunjukkan posisi atas stack. Dalam implementasi menggunakan linked list, setiap elemen stack memiliki referensi ke elemen di bawahnya, sehingga operasi push dan pop hanya memerlukan penambahan atau penghapusan elemen di ujung linked list [4].


## Guided 

![guided-1 (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/afe7b0ce-ec81-46cb-8eeb-09c1cb8705cc)
![guided-1 (input )](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/45b3fb69-d584-4918-b632-e3e1cdbc6591)

#### Output: 
![guided-1 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/e3439041-9b2e-4730-9b4b-6aed7657314b)

#### Interpretasi
Implementasi kode yang ditampilkan merupakan sebuah Stack dalam bahasa pemrograman C++. Struktur data stack menggunakan array dalam bahasa C++. Operasi stack yang tersedia meliputi push, pop, peek, count, change, destroy, dan print. Kode ini digunakan untuk mengelola elemen dalam stack dan menampilkan isi stack.

Kode yang disediakan adalah implementasi struktur data stack menggunakan array dalam bahasa C++. Operasi stack yang tersedia meliputi:
1. Push: Menambahkan elemen ke atas stack. Operasi ini memeriksa apakah stack penuh sebelum menambahkan elemen. Jika stack penuh, maka akan ditampilkan pesan yang mengindikasikan bahwa stack penuh.
2. Pop: Menghapus elemen teratas dari stack. Operasi ini memeriksa apakah stack kosong sebelum menghapus elemen. Jika stack kosong, maka akan ditampilkan pesan yang mengindikasikan bahwa tidak ada data untuk dihapus.
3. Peek: Menampilkan elemen pada posisi tertentu dalam stack tanpa menghapusnya. Operasi ini memeriksa apakah stack kosong sebelum menampilkan elemen. Jika stack kosong, maka akan ditampilkan pesan yang mengindikasikan bahwa tidak ada data untuk ditampilkan.
4. Count: Mengembalikan jumlah elemen dalam stack.
5. Change: Mengubah elemen pada posisi tertentu dalam stack. Operasi ini memeriksa apakah posisi dalam stack sebelum mengubah elemen. Jika posisi melebihi stack, maka akan ditampilkan pesan yang mengindikasikan bahwa posisi melebihi data.
6. Destroy: Menghapus semua elemen dalam stack.
7. Print: Menampilkan semua elemen dalam stack.

Dalam fungsi main, operasi stack ditampilkan dengan menambahkan, menghapus, menampilkan, dan mengubah elemen. Stack kemudian dihapus dan isi stack ditampilkan kembali untuk menunjukkan bahwa stack telah direset.


## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.
![unguided-1 (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/5831df4b-3a2b-4eca-9d7c-b47c59eeab5a)

#### Output :
![unguided-1 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/e9bad4fa-aaef-4b59-9bb1-e4824d9eb415)

#### Interpretasi
Palindrome dalam bahasa Indonesia adalah kata, rangkaian kata, atau bilangan yang terbaca sama, baik dari depan maupun dari belakang. Contoh kata-kata palindrom dalam bahasa Indonesia antara lain adalah "kodok", "radar", "taat", "kasur rusak".
Interpretasi fungsi `isPalindrome` dalam program C++ adalah sebagai berikut:
- **Fungsi `isPalindrome`**: Fungsi ini digunakan untuk menentukan apakah suatu kalimat adalah palindrom atau tidak. Palindrom adalah kalimat yang terbaca sama ketika dibaca dari depan dan dari belakang, tanpa memperhatikan spasi, tanda baca, atau huruf besar/kecil.
- **Parameter `kalimat`**: Fungsi `isPalindrome` menerima satu parameter, yaitu `kalimat`, yang berupa string yang akan diuji apakah palindrom atau tidak.
- **Proses**: Fungsi `isPalindrome` bekerja dengan cara membandingkan huruf dari awal dan akhir kalimat. Jika huruf-huruf tersebut tidak sama, maka fungsi mengembalikan nilai `false`, yang berarti kalimat bukan palindrom. Jika huruf-huruf tersebut sama, maka fungsi terus membandingkan huruf-huruf dari awal dan akhir kalimat hingga mencapai tengah kalimat. Jika semua huruf telah dibandingkan dan tidak ada perbedaan, maka fungsi mengembalikan nilai `true`, yang berarti kalimat adalah palindrom.
- **Penggunaan**: Fungsi `isPalindrome` digunakan dalam program utama (`main`) untuk meminta input dari pengguna dan kemudian membandingkan kalimat tersebut dengan fungsi `isPalindrome`. Jika kalimat adalah palindrom, maka program akan menampilkan pesan "Kalimat tersebut adalah palindrom." Jika tidak, maka program akan menampilkan pesan "Kalimat tersebut bukan palindrom."

### 2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?
![unguided-2 (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/68e09f32-d835-4c8c-aefd-8a228572c250)

#### Output :
![unguided-2 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/1618f82f-e06f-4ad4-aec7-57d680f13c39)

#### Interpretasi
Interpretasi program C++ yang menggunakan fungsi `reverseSentence` untuk membalikkan kalimat adalah sebagai berikut:
- **Program Utama**: Program utama (`main`) meminta input kalimat dari pengguna dan kemudian membalikkan kalimat tersebut menggunakan fungsi `reverseSentence`.
- **Fungsi `reverseSentence`**: Fungsi `reverseSentence` membalikkan kalimat yang diberikan. Fungsi ini memisahkan kalimat menjadi kata-kata, memasukkannya ke dalam stack, dan kemudian mengeluarkan kata-kata dari stack untuk membentuk kalimat terbalik.
- **Proses**:
   - Fungsi `reverseSentence` menggunakan stack untuk memisahkan kalimat menjadi kata-kata. Stack digunakan karena memungkinkan pengembalian elemen dalam urutan yang berlawanan dengan urutan pengembalian elemen dalam array atau vektor.
   - Fungsi `reverseSentence` menggunakan stringstream untuk memisahkan kalimat menjadi kata-kata. Stringstream digunakan karena memungkinkan penggunaan operator `>>` untuk memisahkan kalimat menjadi kata-kata.
   - Fungsi `reverseSentence` mengulangi proses memisahkan kalimat menjadi kata-kata hingga tidak ada lagi kata yang tersisa dalam kalimat.
   - Fungsi `reverseSentence` kemudian mengeluarkan kata-kata dari stack untuk membentuk kalimat terbalik. Kata-kata diambil dari stack dan ditambahkan ke dalam string `reversedSentence` dengan spasi di antara kata-kata.
- **Penggunaan**: Fungsi `reverseSentence` digunakan dalam program utama (`main`) untuk meminta input kalimat dari pengguna dan kemudian membalikkan kalimat tersebut. Hasil balikan kalimat kemudian ditampilkan ke layar.

  
  
## Referensi
[1] R. Firliana, R. Rina, dan P. Kasih, "Struktur Data yang Terorganisir," dalam Algoritma dan Pemrograman C++, Adjie Media Nusantara, Hal.1-82, 2019.

[2] Trivusi.web.id, "Struktur Data Stack: Pengertian, Karakteristik, dan Kegunaannya", 2022.

[3] Niagahoster.co.id, "Apa Itu Struktur Data dan Kegunaannya dalam Pemrograman", 2024.

[4] E. L. Pratiwi, Konsep Dasar Algoritma dan Pemrograman dengan Bahasa C++. Banjarmasin: Poiban Press, 2020.


