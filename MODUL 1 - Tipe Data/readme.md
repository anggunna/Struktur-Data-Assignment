# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Tipe data adalah sebuah komponen dari potongan data yang memberikan sinyal pada komputer terkait cara mengartikan data tersebut. Tipe data dalam struktur data merujuk pada jenis-jenis data yang dapat digunakan untuk menyimpan dan mengorganisir informasi.Tipe data merupakan bagian program yang paling penting karena tipe data mempengaruhi setiap instruksi yang akan dilaksanakan oleh computer.Berikut adalah beberapa fungsi utama dari tipe data dalam pemrograman:
1. Menentukan Jenis Nilai, tipe data memiliki kisaran nilai yang dapat disimpan. 
2. Mengatur Penggunaan Memori, tipe data menggunakan jumlah memori yang berbeda tergantung pada ukuran dan presisinya. 
3. Mengatur Operasi dan Operasi yang Diperbolehkan, tipe data juga menentukan operasi apa yang dapat dilakukan terhadap nilai-nilai yang disimpan dalam variabel tersebut. 

## Tipe Data Primitif
Tipe data primitif biasanya digunakan untuk menyimpan nilai yang sederhana dan tidak kompleks seperti bilangan bulat, bilangan pecahan, karakter, dan nilai boolean. Berikut adalah daftar tipe data primitif yang umum digunakan di bahasa pemrograman C++:
1. Tipe data untuk bilangan bulat (int). Perbedaan tipe data bilangan bulat ini terletak pada jangkauan nilai yang dapat disimpan pada setiap tipe data. seperti 1, 2, 3, dan seterusnya.
2. Tipe data untuk bilangan pecahan/desimal (float), seperti 2.5, 3.14, dan seterusnya.
3. Tipe data untuk karakter (char), tipe data char digunakan untuk menyatakan / menyimpan sebuah karakter Unicod seperti ‘a’, ‘b’, ‘c’, dan seterusnya.
4. Tipe data untuk boolean (bool),tipe data bool digunakan untuk menampung nilai logika. Tipe data ini hanya bernilai bernilai benar yang direpresentasikan dengan true dan bernilai salah yang direpresentasikan dengan false.

## Tipe Data Abstrak
Tipe data abstrak dalam C++ merujuk pada konsep yang memungkinkan pengguna untuk mendefinisikan tipe data baru yang lebih kompleks dan spesifik, yang tidak langsung tersedia dalam bahasa pemrograman tersebut. Beberapa contoh tipe data abstrak yang umum digunakan dalam pemrograman termasuk:
1. Stack (Tumpukan): Stack adalah tipe data abstrak yang mengikuti prinsip LIFO (Last In, First Out), di mana elemen terakhir yang ditambahkan ke stack akan menjadi elemen pertama yang dihapus. Operasi utama yang dilakukan pada stack meliputi:
push(): Menambahkan elemen ke atas stack.
pop(): Menghapus dan mengembalikan elemen teratas dari stack, jika stack tidak kosong.
peek(): Mengembalikan elemen teratas dari stack tanpa menghapusnya, jika stack tidak kosong.
isEmpty(): Mengembalikan true jika stack kosong, dan false jika tidak.
isFull(): Mengembalikan true jika stack penuh, dan false jika tidak.
2. Queue (Antrian): Queue adalah tipe data abstrak yang mengikuti prinsip FIFO (First In, First Out), di mana elemen pertama yang ditambahkan ke queue akan menjadi elemen pertama yang dihapus. Operasi utama yang dilakukan pada queue meliputi:
enqueue(): Menambahkan elemen ke akhir queue.
dequeue(): Menghapus dan mengembalikan elemen pertama dari queue, jika queue tidak kosong.
peek(): Mengembalikan elemen pertama dari queue tanpa menghapusnya, jika queue tidak kosong.
size(): Mengembalikan jumlah elemen dalam queue.
isEmpty(): Mengembalikan true jika queue kosong, dan false jika tidak.
isFull(): Mengembalikan true jika queue penuh, dan false jika tidak.
3. List (Daftar): List adalah tipe data abstrak yang memungkinkan penyimpanan elemen dalam urutan tertentu dan memungkinkan akses ke elemen melalui indeks atau pointer. List dapat diimplementasikan menggunakan array atau linked list. Dalam konteks array, list dapat dianggap sebagai array yang dapat menyimpan elemen dalam urutan tertentu dan memungkinkan akses ke elemen melalui indeks. Dalam konteks linked list, list dapat dianggap sebagai kumpulan node, di mana setiap node memiliki pointer ke elemen data dan pointer ke node berikutnya dalam list.

## Tipe Data Koleksi
Tipe data koleksi adalah tipe data yang digunakan untuk menyimpan kumpulan elemen. Tipe data koleksi ini memungkinkan pengguna untuk mengelola dan mengakses elemen-elemen dalam kumpulan tersebut dengan cara yang berbeda-beda, tergantung pada jenis tipe data koleksi yang digunakan. Berikut adalah tipe data koleksi yang umum digunakan:
1. Array adalah tipe data koleksi yang terdiri dari sejumlah komponen-komponen yang mempunyai tipe data yang sama. Array dapat berupa satu dimensi atau dua dimensi. Array satu dimensi memiliki indeks tunggal, sedangkan array dua dimensi memiliki indeks ganda. Array memungkinkan akses ke elemen melalui indeks yang menunjukkan posisi elemen dalam array.
2. Array Asosiatif adalah tipe data koleksi yang terdiri dari kumpulan pasangan (kunci, nilai), di mana setiap kunci yang mungkin muncul paling sekali dalam koleksi. Operasi yang terkait dengan tipe data ini memungkinkan penambahan, penghapusan, modifikasi pasangan, dan pencarian nilai yang terkait dengan kunci tertentu. Array asosiatif dapat diimplementasikan menggunakan tabel hash atau pohon pencarian, dan memiliki banyak aplikasi termasuk pola pemrograman fundamental seperti memoization dan pola dekorator.
3. List adalah tipe data koleksi yang digunakan untuk mengelompokkan bersama potongan informasi sehingga mereka jelas terkait satu sama lain dan mudah dibaca. List dapat berisi elemen dari berbagai tipe data dan memungkinkan akses ke elemen melalui indeks. List juga memungkinkan penambahan, penghapusan, dan modifikasi elemen.
4. Tuple adalah tipe data koleksi yang digunakan untuk menyimpan lebih dari satu nilai dalam satu variabel secara sekaligus. Tuple bersifat ordered (terurut) dan juga bersifat unchangeable (tidak bisa diubah). Ini berarti datanya bisa kita akses menggunakan indeks, dan datanya tidak akan pernah bisa diubah setelah pertama kali definisikan. Dalam Python, tipe data tuple didefinisikan dengan tanda kurung ().
## Guided 

### 1. Tipe Data Primitif

![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/bb564898-aa71-48c7-95e6-1dfaf3fe8092)
Kode diatas adalah contoh penggunaan tipe data primitif sederhana yaitu, kode menerima input berupa tipe operator, bilangan 1 dan bilangan 2. Selanjutnya ketika kode tersebut dijalankan user akan diminta untuk memasukkan data yang diminta dan akan melakukan operasi yang dipilih dengan teknik switch dan case.

### 2. Tipe Data Abstrak
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/fe17d7ec-aceb-4f01-b5b4-bc9a87f53b72)
Kode diatas adalah contoh penggunaan tipe data abstrak. Pertama kode tersebut membuat class mahasiswa menggunakan keyword struct dan mendeklarasi 3 atribut dalam kelas tersebut yaitu name, address dan age. Selanjutnya pada fungsi main(), beberapa objek dibuat berdasarkan class yang sudah didefinisi sebelumnya dan mencetak objek yang sudah dibuat.

### 3. Tipe Data Koleksi
![guided-3](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/c6aad61b-476d-482e-bb98-224d6628a627)
Kode diatas menggunakan array untuk menampung 5 elemen integer selanjutnya setiap elemen dari array tersebut dicetak satu-persatu menggunakan keyword atau statement cout.

## Unguided 

### 1. [Soal]
![soal-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/f530ce71-5852-4f3b-b653-46ed75857c60)

#### Output:
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/e3b5d4ea-9292-4dc3-84ef-d645411deeee)
Kode diatas memiliki 2 fungsi utama yaitu menghitung luas persegi dan luas persegi panjang. Kedua fungsi tersebut dilakukan deklarasi pada awal kode dengan fungsi hitung luas persegi yang memiliki 1 parameter sisi dan fungsi hitung luas persegi panjang yang memiliki 2 parameter yaitu panjang dan lebar. Pada fungsi main() argument dari seluruh parameter tersebut dibuat dengan memasukkan data satu persatu yang seterusnya dilakukan pemanggilan fungsi dan mencetak keluaran yang dihasilkan.

### 2. [Soal]
![soal-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/1ce35fdf-5bea-400b-bd08-1e3bcad1cc31)

#### Output:
![unguided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/fca1f570-5c89-4cea-b9e5-5f3e67f38432)
Kode diatas adalah contoh penggunaan struct dan class. Struct kucing dibuat dengan 3 atribut yaitu nama ras dan umur, nama memiliki tipe data konstan karakter begitu juga dengan ras, sedangkan umur memiliki tipe data integer atau bilangan bulat. Pada fungsi main() objek-objek dari Struct Kucing dibuat dengan nama cat1 hingga cat3 yang selanjutnya dilakukan pencetakan data dari setiap objek yang dibuat. Dalam bahasa pemrograman c++ struct dan class memungkinkan anda untuk membuat struktur data yang kompleks. Keduanya dapat mendefinisikan tipe data baru yang memiliki anggota dan fungsi anggota yang terkait dengannya.

### 2. [Soal]
![soal-3](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/b86005ee-4f5c-44f7-ad58-8e35e775fd2f)

#### Output:
![unguided-3](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/2feb5845-d15e-4629-9d71-5899c3d4a852)
Kode diatas adalah contoh penggunaan tipe data vektor. Fungsi yang memberikan keluaran integer dideklarasi pada awal kode yang melakukan operasi perkalian. Fungsi tersebut menerima satu parameter bernama x. Pada fungsi main() sebuah variabel numbers dibuat dengan tipe data vektor yang memiliki 5 elemen. Selanjutnya fungsi transform digunakan untuk memproses setiap data pada vektor numbers agar dilakuakn perkalian menggunakan fungsi multiplyByTwo yang sebelumnya sudah dideklarasi. Terakhir dilakukan perulangan pada doubledNumbers yang mana variabel tersebut merupakan hasil dari pemrosesan sebelumnya. Pada perulangan tersebut seluruh elemen dicetak satu-persatu.

## Kesimpulan
Berikut adalah ringkasan dan interpretasi umum tentang tipe data dalam bahasa C++ berdasarkan praktikum dan  tugas yang diberikan:

C++ memiliki tipe data primitif seperti int, float, char, dan bool, yang digunakan untuk menyimpan nilai sederhana seperti bilangan bulat, pecahan, karakter, dan kebenaran. Selain itu, C++ juga mendukung struktur data kompleks seperti array, struct, dan class. Array dan vektor, sebagai tipe data koleksi, memungkinkan penyimpanan sejumlah nilai dalam satu variabel, dengan vektor lebih dinamis karena dapat mengubah ukurannya saat runtime. 

Fungsi dalam C++ adalah blok kode yang dapat dipanggil dengan suatu nama, bisa mengembalikan nilai atau tidak, dan menerima parameter. Penggunaan std::map untuk menyimpan pasangan kunci-nilai memberikan cara efisien untuk pencarian berbasis kunci. Pentingnya memilih tipe data yang tepat dalam pemrograman untuk efisiensi dan kejelasan kode sangatlah penting, karena pemahaman tentang tipe data memungkinkan pemrogram membuat keputusan yang tepat dalam penyimpanan dan manipulasi data.

## Referensi
[1] Anita Sindar (2019). Struktur Data dan Algoritma Dengan C++. Sumatra Utara : CV. AA. RIZKY.
[2] Meidyan Permata Putri, Guntoro Barovih, Rezania Agramanisti Azdy, Yuniansyah, Andri Saputra, Yesi Sriyeni, Arsia Rini, Fadhila Tangguh Admojo. Bandung : Grup CV. Widina Media Utama.
[3] Antonius Rachmat C. (2010). Algoritma dan Pemrograman dengan Bahasa C. Yogyakarta: AndiOffset.
[4] Pemburukode.com. (2023, 16 Februari). Pengenalan Tentang Tipe Data Primitif dan Bukan Primitif di Bahasa Pemrograman C++. 
[5] GeeksforGeeks. (2024, 11 Maret). Abstract Data Types.