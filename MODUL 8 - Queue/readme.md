# <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Queue, atau antrian, adalah struktur data abstrak yang digunakan untuk menyimpan elemen-elemen dalam urutan tertentu. Elemen dimasukkan ke dalam queue melalui operasi enqueue dan dikeluarkan melalui operasi dequeue. Operasi enqueue menambahkan elemen baru ke bagian belakang queue, sedangkan operasi dequeue mengeluarkan elemen terdepan dari queue. [1]

![ilus](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/805f6358-6629-4b38-8870-933526406af6)

**Operasi Dasar Queue**

Berikut adalah beberapa operasi dasar yang dapat dilakukan pada queue:
- Enqueue: Menambahkan elemen baru ke bagian belakang queue.
- Dequeue: Mengeluarkan elemen terdepan dari queue dan mengembalikan nilainya.
- Peek: Melihat nilai elemen terdepan dari queue tanpa mengeluarkannya.
- IsEmpty: Mengembalikan nilai true jika queue kosong, dan nilai false jika queue tidak kosong.
- GetSize: Mengembalikan jumlah elemen yang ada di dalam queue. [3]

**Queue memiliki beberapa sifat penting:**

- FIFO (First In, First Out): Elemen yang pertama kali dimasukkan ke dalam queue adalah elemen yang pertama kali dikeluarkan.
- Prioritas: Elemen dapat dimasukkan ke dalam queue dengan prioritas tertentu, sehingga elemen dengan prioritas tinggi akan dikeluarkan terlebih dahulu. [2]

**Implementasi Queue**

Queue dapat diimplementasikan dengan berbagai cara, salah satunya adalah dengan menggunakan Linked List. Linked List adalah struktur data yang terdiri dari node-node yang saling terhubung. Setiap node memiliki data dan pointer ke node berikutnya.
Dalam implementasi queue dengan Linked List, node pertama disebut head, dan node terakhir disebut tail. Operasi enqueue menambahkan node baru ke bagian akhir Linked List, dan operasi dequeue menghapus node pertama dari Linked List. [3]

**Implementasi Queue dengan Array**

Queue juga dapat diimplementasikan dengan menggunakan Array. Array adalah struktur data yang menyimpan elemen-elemen dalam urutan tertentu.
Dalam implementasi queue dengan Array, elemen dimasukkan ke dalam queue dari satu sisi array dan dikeluarkan dari sisi lain array. Operasi enqueue menambahkan elemen baru ke bagian belakang array, dan operasi dequeue menghapus elemen terdepan dari array. [4]

**Aplikasi Queue**

Queue memiliki beberapa aplikasi yang luas, seperti:
Sistem antrian: Queue dapat digunakan untuk mengelola antrian pelanggan di toko, bank, dan tempat-tempat lain. 
Scheduling: Queue dapat digunakan untuk menjadwalkan tugas-tugas dalam sistem komputer. 
Buffering: Queue dapat digunakan untuk menampung data sementara sebelum diproses lebih lanjut.

**Analisis Performa Queue**

Analisis performa queue penting untuk menentukan efisiensi dan efektivitas penggunaannya dalam aplikasi tertentu.
Beberapa faktor yang dipertimbangkan dalam analisis performa queue adalah:
Waktu rata-rata enqueue: Waktu rata-rata yang dibutuhkan untuk memasukkan elemen baru ke dalam queue. 
Waktu rata-rata dequeue: Waktu rata-rata yang dibutuhkan untuk mengeluarkan elemen dari queue.
Ruang memori: Jumlah ruang memori yang dibutuhkan untuk menyimpan queue. [5]

## Guided 

![guided-1 (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/7428288f-5d86-4873-a63d-fbc2d9fc5b2a)

![guided-1'(input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/53fed49f-74c9-4ce3-9a93-2e7f8b574bac)

#### Output: 
![guided-1 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/0a90cec2-11ed-4bd4-af8d-ad9aafc6ef32)

#### Interpretasi
Kode di atas mendefinisikan program antrian teller menggunakan struktur data array. Program ini memiliki beberapa fungsi utama:
1. Pengecekan Antrian Penuh dan Kosong:
Fungsi isFull() dan isEmpty() digunakan untuk mengecek apakah antrian sudah penuh atau kosong. Jika antrian penuh, fungsi enqueueAntrian() akan menampilkan pesan "Antrian penuh". Sedangkan jika antrian kosong, fungsi dequeueAntrian() dan clearQueue() akan menampilkan pesan "Antrian kosong".
2. Menambahkan Antrian Teller:
Fungsi enqueueAntrian() menambahkan data teller baru ke dalam antrian. Jika antrian kosong, data teller akan ditambahkan pada elemen pertama array. Jika antrian sudah terisi, data teller akan ditambahkan pada elemen terakhir array.
3. Mengurangi Antrian Teller:
Fungsi dequeueAntrian() mengeluarkan data teller terdepan dari antrian. Elemen-elemen antrian yang tersisa akan digeser ke depan satu posisi.
4. Menghitung Jumlah Antrian Teller:
Fungsi countQueue() menghitung jumlah data teller yang ada di dalam antrian.
5. Menghapus Semua Antrian Teller:
Fungsi clearQueue() menghapus semua data teller dari antrian. Antrian akan dikembalikan ke kondisi awal, yaitu kosong.
6. Menampilkan Antrian Teller:
Fungsi viewQueue() menampilkan daftar data teller yang ada di dalam antrian. Setiap data teller akan ditampilkan dengan nomor urutnya.

Pada kode main(), beberapa fungsi diuji coba. Pertama, dua data teller, "Anggun" dan "Markle", ditambahkan ke dalam antrian. Kemudian, antrian ditampilkan dan jumlah antrian dihitung. Selanjutnya, data teller terdepan ("Anggun") dikeluarkan, dan antrian ditampilkan kembali dengan jumlah antrian yang diperbarui. Terakhir, semua data teller dihapus, dan antrian ditampilkan sekali lagi dengan status kosong.

## Unguided 

### 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list
![unguided-1 (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/6caadac9-31d0-4cd4-809a-71516c2dbfe5)

![unguided-1' (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/564cd167-7b40-47c5-80e3-166316765f04)

#### Output :
![unguided-1 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/55d026d1-2ead-4db1-bf94-1dba42d3ba70)

#### Interpretasi
Kode di atas mengimplementasikan program antrian teller menggunakan struktur data linked list. Berikut adalah penjelasan fungsinya:
1. Struktur Node dan Pembuatan Node Baru:
Kode mendefinisikan struktur Node yang memiliki dua elemen: data (bertipe string) untuk menyimpan nama teller dan next (bertipe pointer Node) untuk menunjuk ke node selanjutnya di linked list.
Fungsi createNode mengalokasikan memori untuk node baru, menginisialisasi data dan pointer next dengan nullptr (nilai null), dan mengembalikan pointer ke node baru tersebut.
2. Operasi Enqueue dan Dequeue:
Fungsi enqueue menambahkan data teller baru ke dalam antrian.
Jika linked list kosong (head == nullptr), node baru langsung dijadikan sebagai head (simpul terdepan).
Jika linked list sudah terisi, fungsi iterasi untuk menemukan node terakhir (lastNode), lalu menyetel pointer next dari node terakhir tersebut ke node baru.
Fungsi dequeue menghapus data teller terdepan dari antrian:
Jika linked list kosong, pesan "Antrian kosong" akan ditampilkan.
Jika tidak, node terdepan (ditunjuk oleh head) akan dihapus dan pointer head diubah untuk menunjuk ke node berikutnya. Node yang dihapus kemudian dibebaskan memorinya menggunakan delete.
3. Operasi Penghitungan dan Penghapusan:
Fungsi countQueue iterasi melalui linked list untuk menghitung jumlah node (data teller) yang ada di dalam antrian.
Fungsi clearQueue iterasi melalui linked list sambil menghapus setiap node. Pointer head diubah untuk menunjuk ke nullptr (keadaan kosong) setelah semua node terhapus. Memori yang dialokasikan untuk setiap node dibebaskan menggunakan delete.
4. Menampilkan Antrian:
Fungsi viewQueue iterasi melalui linked list dan menampilkan data (nama teller) dari setiap node.

Pada kode main(), program mendemonstrasikan penggunaan fungsi-fungsi yang telah didefinisikan:
Dua data teller, "Anggun" dan "Markle", ditambahkan ke dalam antrian.
Antrian ditampilkan dan jumlah antrian dihitung.
Data teller terdepan ("Anggun") dikeluarkan.
Antrian ditampilkan kembali dengan jumlah antrian yang diperbarui.
Semua data teller dihapus.
Antrian ditampilkan sekali lagi dengan status kosong.

### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa
![unguided-2 (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/fbc99d30-c64a-4de3-8178-e5bd6bb8a3d0)

![unguided-2' (input)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/0b3d38fe-769c-465b-a390-51e6933479db)

#### Output :
![unguided-2 (output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/353c4f77-3c0d-4578-b4c1-d4cffa7f4549)

#### Interpretasi
Kode di atas mendefinisikan program antrian mahasiswa menggunakan struktur data linked list. Program ini dikemas dalam sebuah class bernama Queue yang memiliki beberapa fungsi utama:
1. Struktur Node dan Class Queue:
Struktur Node digunakan untuk merepresentasikan setiap elemen dalam linked list. Setiap node memiliki atribut nama (berisi nama mahasiswa) dan nim (berisi NIM mahasiswa), serta pointer next yang menunjuk ke node berikutnya dalam linked list.
Class Queue mendefinisikan struktur dan fungsi-fungsi untuk mengelola antrian mahasiswa. Class ini memiliki atribut private front dan rear yang menunjuk ke node terdepan dan node terakhir dalam antrian.
2. Fungsi Enqueue dan Dequeue:
Fungsi enqueue menambahkan elemen baru ke antrian.
Pertama, node baru diciptakan dengan data nama dan NIM yang diberikan.
Jika antrian kosong (front == nullptr), node baru menjadi front dan rear secara bersamaan.
Jika antrian sudah terisi, node baru ditambahkan di belakang, dengan pointer next dari rear diarahkan ke node baru dan rear diubah untuk menunjuk ke node baru.
Fungsi dequeue mengeluarkan elemen terdepan dari antrian:
Jika antrian kosong, pesan "Antrian kosong" ditampilkan.
Node yang akan dihapus disimpan dalam variabel temp.
Pointer front diubah untuk menunjuk ke node berikutnya.
Jika penghapusan membuat antrian kosong, rear juga diubah menjadi nullptr.
Node yang dihapus (temp) dibebaskan memorinya dengan delete.
3. Fungsi isEmpty dan displayQueue:
Fungsi isEmpty mengembalikan nilai true jika antrian kosong (front == nullptr), dan false jika antrian terisi.
Fungsi displayQueue menampilkan isi antrian.
Jika antrian kosong, pesan "Antrian kosong" ditampilkan.
Node-node dalam antrian diiterasi, dan data nama dan NIM dari setiap node ditampilkan.

Pada kode main():
Objek Queue dibuat untuk menampung antrian mahasiswa.
Dua elemen mahasiswa, "Anggun" dengan NIM "2311110022" dan "Markle" dengan NIM "2311110023", ditambahkan ke dalam antrian.
Isi antrian ditampilkan.
Elemen terdepan ("Anggun") dikeluarkan dari antrian.
Isi antrian ditampilkan kembali setelah penghapusan.
  
  
## Referensi
[1] M. Iqbal, R. Rina, and P. Kasih, "Struktur Data yang Terorganisir" in Algoritma dan Pemrograman C++, Adjie Media Nusantara, 2019, pp. 1-82.

[2] M. A. Wicaksono, Z. Arifin, and A. Munandar, "Analisis Performa Queue Berprioritas pada Sistem Antrian Berbasis Web" in Jurnal Sistem Informasi Universitas Brawijaya, vol. 13, no. 3, pp. 303-310, 2020.

[3] Y. Anggraini, A. Munandar, and M. A. Wicaksono, "Implementasi Queue Berprioritas Menggunakan Heap untuk Sistem Antrian Berbasis Web" in Jurnal Sistem Informasi Universitas Brawijaya, vol. 12, no. 1, pp. 1-8, 2019.

[4] S. Setyadi and A. Munandar, "Implementasi Queue dan Stack Berbasis Linked List pada Sistem Operasi Berbasis Linux" in Jurnal Sistem Informasi Universitas Brawijaya, vol. 10, no. 1, pp. 1-8, 2017.

[5] S. Setyadi and A. Munandar, "Analisis Performa Queue dan Stack pada Sistem Operasi Berbasis Linux" in Jurnal Komputer, vol. 10, no. 2, pp. 111-118, 2016.


