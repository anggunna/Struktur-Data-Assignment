# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Sorting adalah proses mengatur elemen-elemen dalam sebuah himpunan data menjadi urutan tertentu, seperti urutan menaik atau menurun, berdasarkan kriteria tertentu. Tujuan utama dari sorting adalah untuk menyusun data dalam suatu urutan yang teratur sehingga memudahkan untuk pencarian, pengolahan, dan analisis data. Proses sorting sangat umum digunakan dalam berbagai bidang, termasuk pemrosesan data, pengembangan perangkat lunak, analisis data, dan banyak lagi. Sorting adalah salah satu operasi dasar dalam pengembangan algoritma dan pemrograman komputer, dan ada banyak algoritma yang dirancang khusus untuk melakukan tugas ini dengan efisien, tergantung pada jenis data yang diurutkan dan kebutuhan spesifik dari aplikasi yang bersangkutan[2].  Ada berbagai jenis metode sorting data yang kita kenal, antara lain Bubble Sort, Selection Sort, Insertion Sort, Quick Sort, Shell Sort, dan Heap Sort. Semua metode ini memiliki kelebihan dan kelemahan masing-masing, penggunaannya ditentukan berdasarkan kebutuhan. Setiap metode memiliki algoritma yang berbeda, di mana perbedaan dalam algoritma ini memengaruhi waktu eksekusi[5].

## Insertion Sort 
Sorting adalah teknik yang digunakan untuk menyusun data dalam urutan tertentu. Insertion Sort membagi array menjadi dua bagian, memindahkan satu elemen pada setiap iterasi dari bagian yang belum diurutkan ke bagian yang sudah diurutkan, hingga seluruh array diurutkan.Sorting diterapkan untuk menyusun kembali elemen-elemen dalam urutan numerik seperti urutan menaik atau menurun, atau untuk kata-kata dalam urutan abjad. Maka, kami mengusulkan algoritma pengurutan efisien yang dikenal sebagai algoritma Pengurutan Sisipan Bidireksional yang Ditingkatkan yang dikembangkan dari konsep insertion sorting. Analisis perbandingan dilakukan untuk algoritma Pengurutan Sisipan Bidireksional yang Ditingkatkan yang diusulkan dengan algoritma pengurutan insertion sorting. Dibandingkan dengan algoritma insertion sort, algoritma yang diusulkan mengungguli dengan jumlah perbandingan yang lebih sedikit dalam kasus terburuk dan waktu komputasi kasus rata-rata. Algoritma yang diusulkan bekerja efisien untuk elemen-elemen yang diduplikasi, yang merupakan peningkatan canggih, dan hasilnya terbukti[1].

## Bubble Sort
Bubble sort adalah metode pengurutan data dengan cara menukar data pada data pertama dan data pada data pertama Tetap duduk di sebelahnya sampai Anda yakin tidak akan ada lagi perubahan atau pertukaran dalam iterasi tertentu. Algoritma menggunakan perbandingan dalam operasi antar elemen. Algoritma bubble sort adalah algoritma pengurutan yang paling dasar, dan metode pengurutan juga yang paling sederhana daripada algoritma pengurutan lainnya[4].

## Selection Sort
Selection sort (pengurutan dengan memilih) adalah proses pengurutan data menurut aturan tertentu agar terurut secara teratur. Pengurutan data yang terdiri dari beberapa kriteria memiliki prioritas dimana data tersebut diurutkan dengan menyediakan fungsi sort untuk mengurutkan data array dalam urutan naik atau turun dari nilai terkecil ke terbesar. Fungsi sort adalah mengurutkan data dari angka terkecil hingga terbesar atau huruf terakhir dari huruf pertama setiap kata memprioritaskan huruf lalu angka jika data dalam tabel tersebut terdiri dari data campuran angka dan huruf. Metode yang digunakan adalah mencari elemen terkecil dari array dan menukarnya dengan elemen di posisi pertama, kemudian algoritma ini mengulangi hal yang sama lagi, yaitu mencari elemen di posisi kedua, Proses yang akan dihasilkan dari sistem ini berlanjut sampai semua elemen array berhasil diurutkan[3].

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/309b1261-3d6e-437b-84da-8c51d2f967c5)

#### Interpretasi
Kode diatas adalah contoh mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort, yang berarti mengurutkan dari nilai terkecil ke nilai terbesar. Pada fungsi `bubble_sort`, setiap pasangan elemen dalam array diperiksa, dan jika elemen pertama lebih besar dari elemen kedua, keduanya ditukar posisinya. Proses ini terus berulang sampai tidak ada lagi pertukaran yang perlu dilakukan, menandakan bahwa array sudah diurutkan. Fungsi `print_array` digunakan untuk mencetak isi array ke layar sebelum dan sesudah pengurutan. Dalam fungsi `main`, sebuah array yang berisi data numerik telah dideklarasikan dan diinisialisasi. Setelah diurutkan menggunakan fungsi `bubble_sort`, hasilnya dicetak kembali ke layar. Dengan menggunakan algoritma Bubble Sort, data numerik dapat diurutkan dengan baik dan efisien secara ascending.

#### Kompleksitas waktu & ruang
1. Analisis Kompleksitas Waktu Bubble Sort:
  Algoritma bubble sort melakukan iterasi  berulang hingga tidak diperlukan lagi permutasi. Pada setiap iterasi, algoritme membandingkan setiap pasangan elemen berurutan dalam array dan menukarnya jika tidak berurutan. Jumlah iterasi yang diperlukan  tergantung pada jumlah swap yang dilakukan. Jumlah swap ditentukan oleh urutan asli  elemen dalam array. Dalam kasus terburuk, algoritma  memerlukan waktu O(n^2). n adalah jumlah elemen dalam array. Hal ini karena pada setiap iterasi algoritma memeriksa semua elemen dan terkadang melakukan swap pada setiap pasangan elemen. Dalam kasus terbaik, jika array sudah diurutkan, algoritme hanya membutuhkan waktu O(n) karena hanya diperlukan satu iterasi  untuk memastikan tidak terjadi pertukaran.
2. Analisis Kompleksitas Ruang Bubble Sort:
  Ruang yang dibutuhkan oleh algoritma Bubble Sort terutama tergantung pada jumlah elemen dalam array. Algoritma ini menggunakan ruang konstan tambahan, yaitu variabel sementara untuk menukar elemen dalam array. Oleh karena itu, kompleksitas ruangnya adalah O(1), yang berarti ruang yang dibutuhkan tidak bergantung pada ukuran array.

#### Kesimpulan
Dengan demikian, secara keseluruhan, kompleksitas waktu Bubble Sort adalah O(n^2) dalam kasus terburuk, dan kompleksitas ruangnya adalah O(1). Ini menunjukkan bahwa algoritma ini mungkin tidak efisien untuk array besar karena memerlukan waktu yang lebih lama untuk diurutkan.


### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/e6d50592-6ce9-41e5-8c2b-698c8a03ffa0)

#### Interpretasi
Kode diatas adalah contoh mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort,ang berarti mengurutkan dari nilai terbesar ke nilai terkecil. Insertion Sort adalah algoritma pengurutan yang membagi array menjadi dua bagian yaitu bagian yang sudah diurutkan dan bagian yang belum diurutkan. Pada bagian while (j > 0 && arr[j - 1] < arr[j]), seharusnya kondisi yang benar adalah arr[j - 1] < arr[j] untuk mengurutkan secara descending, tetapi disini kondisi yang digunakan sebaliknya. Setelah kode dijalankan, kita akan melihat bahwa elemen-elemen array akan dicetak dalam urutan yang sama sebelum dan sesudah pengurutan.

#### Kompleksitas waktu & ruang
1. Analisis Kompleksitas Waktu Insertion Sort :
  Pada setiap iterasi, algoritma mencari tempat yang tepat untuk memasukkan elemen ke dalam array yang sudah diurutkan. Dalam kasus terburuk, algoritma memerlukan waktu O(n^2), di mana n adalah jumlah elemen dalam array, karena pada setiap iterasi, algoritma mungkin harus membandingkan elemen yang akan dimasukkan dengan setiap elemen dalam array yang sudah diurutkan.
2. Analisis Kompleksitas Ruang Insertion Sort :
  Algoritma ini menggunakan ruang konstan tambahan, yaitu variabel sementara untuk menukar elemen dalam array. Oleh karena itu, kompleksitas ruangnya adalah O(1), yang berarti ruang yang dibutuhkan tidak bergantung pada ukuran array.

#### Kesimpulan
Dengan demikian, secara keseluruhan, kompleksitas waktu Insertion Sort adalah O(n^2) dalam kasus terburuk, dan kompleksitas ruangnya adalah O(1). Ini menunjukkan bahwa algoritma ini mungkin tidak efisien untuk array besar karena memerlukan waktu yang lebih lama untuk diurutkan.

## Unguided 

### 1. [Soal]
![soal-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/95eacd32-98cb-4abe-bcb3-b7d7a5e46143)

#### Output:
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/8debcf38-fec7-4757-95e1-2fd796dba0db)

#### Interpretasi
Kode diatas adalah implementasi dari algoritma Selection Sort , Maka fungsi ini menerima sebuah array arr yang berisi nilai-nilai float yang akan diurutkan dan sebuah integer n yang merupakan jumlah elemen dalam array. Jumlah elemen dalam array dihitung menggunakan ekspresi sizeof(arr) / sizeof(arr[0]), yang akan menghasilkan jumlah elemen dalam array.Maka, Kode tersebut akan menghasilkan output yang menampilkan nilai-nilai IPS yang diurutkan secara menaik. Menunjukkan bahwa nilai IPS telah diurutkan dari yang terkecil (2.4) hingga yang terbesar (4.0) menggunakan algoritma Selection Sort.

#### Kompleksitas waktu & ruang
1. Analisis Kompleksitas Waktu Selection Sort:
  Algoritma ini memiliki dua loop bersarang, yaitu loop luar untuk mengiterasi melalui setiap elemen dalam array, dan loop dalam untuk mencari elemen terkecil dalam bagian yang belum diurutkan. Algoritma memerlukan waktu O(n^2), di mana n adalah jumlah elemen dalam array, karena pada setiap iterasi, algoritma harus membandingkan setiap elemen dengan elemen-elemen lain dalam bagian yang belum diurutkan.
2. Analisis Kompleksitas Ruang
  Algoritma ini menggunakan ruang konstan tambahan, yaitu variabel sementara untuk menukar elemen dalam array. Oleh karena itu, kompleksitas ruangnya adalah O(1), yang berarti ruang yang dibutuhkan tidak bergantung pada ukuran array.

#### Kesimpulan
Dengan demikian, secara keseluruhan, kompleksitas waktu Selection Sort adalah O(n^2) dalam kasus terburuk dan rata-rata, dan kompleksitas ruangnya adalah O(1). Ini menunjukkan bahwa algoritma ini mungkin tidak efisien untuk array besar karena memerlukan waktu yang lebih lama untuk diurutkan.

### 2. [Soal]
![soal-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/1df66207-8b44-4c40-9577-8662d447d108)

#### Output:
![unguided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/ec794742-5bb1-4f65-9011-1377bfdcdc2e)

#### Interpretasi
Kode diatas berfungsi untuk menerima sebuah vektor string sebagai parameter dan mengurutkannya menggunakan algoritma Bubble Sort Dan include Libraries, menggunakan tiga library yaitu iostream untuk input-output, vector untuk struktur data dinamis, dan algorithm untuk fungsi swap. Di dalam fungsi main, sebuah vektor names dibuat dan diisi dengan daftar nama yang belum terurut. Maka hasilnya adalah daftar nama yang sudah diurutkan secara alfabet.

#### Kompleksitas waktu & ruang
1. Analisis Kompleksitas Waktu Bubble Sort:
  Dalam algoritma Bubble Sort, terdapat dua loop bersarang: loop luar untuk mengiterasi melalui setiap elemen dalam vektor, dan loop dalam untuk membandingkan setiap pasangan elemen. Algoritma memerlukan waktu O(n^2), di mana n adalah jumlah elemen dalam vektor, karena pada setiap iterasi, algoritma harus membandingkan setiap pasangan elemen.
2. Analisis Kompleksitas Ruang Bubble Sort:
  Algoritma ini menggunakan ruang tambahan yang konstan, yaitu variabel sementara untuk menukar elemen dalam vektor. Oleh karena itu, kompleksitas ruangnya adalah O(1), yang berarti ruang yang dibutuhkan tidak bergantung pada ukuran vektor.

#### Kesimpulan
Dengan demikian, secara keseluruhan, kompleksitas waktu Bubble Sort adalah O(n^2) dalam kasus terburuk dan rata-rata, dan kompleksitas ruangnya adalah O(1). Ini menunjukkan bahwa algoritma ini mungkin tidak efisien untuk vektor besar karena memerlukan waktu yang lebih lama untuk diurutkan.

### 3. [Soal]
![soal-3](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/ee223134-ff5a-47eb-99d9-4fbb8d43342a)

#### Output:
![unguided-3](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/759a763f-8a2d-4ebf-ad07-01784e153906)

#### Interpretasi
Kode diatas adalah program sederhana untuk mengurutkan karakter secara ascending dan descending. Maka, program meminta pengguna untuk memasukkan jumlah karakter yang ingin diurutkan untuk memasukkan karakter sejumlah n sesuai dengan jumlah yang dimasukkan sebelumnya. Dengan karakter dimasukan kedalam 'array characters'. Setelah pengguna memasukkan karakter, program akan menampilkan karakter sebelum pengurutan menggunakan fungsi displayCharacters(). Dan program akan melakukan pengurutan karakter secara menaik (ascending) menggunakan fungsi sort() dari library algorithm. Hasil pengurutan menaik akan ditampilkan kepada pengguna. Selanjutnya, program akan melakukan pengurutan karakter secara menurun (descending) menggunakan fungsi sort() dengan argumen greater<char>() untuk mengurutkan dari besar ke kecil. Hasil pengurutan menurun akan ditampilkan kepada pengguna.

#### Kompleksitas waktu & ruang
1. Analisis Kompleksitas Waktu Sort :
  Fungsi 'std::sort' biasanya menggunakan algoritma Quicksort atau introsort (yang merupakan variasi dari Quicksort), yang memiliki kompleksitas waktu rata-rata O(n log n). Namun, kompleksitas waktu Quicksort dapat menjadi O(n^2) dalam kasus terburuk, tergantung pada implementasi dan data input. Jumlah panggilan ke 'std::sort' dalam kode adalah dua kali, sehingga total kompleksitas waktu untuk sorting adalah O(2 * n log n), atau O(n log n) dalam kompleksitas waktu rata-rata.
2. Analisis Kompleksitas Ruang Sort :
  Kode menggunakan array characters untuk menyimpan karakter input, yang membutuhkan ruang O(n). Oleh karena itu, kompleksitas ruang keseluruhan adalah O(n + log n), yang lebih disederhanakan menjadi O(n) karena ruang yang dominan adalah ruang yang bergantung pada jumlah karakter yang dimasukkan.

#### Kesimpulan
Dengan demikian, secara keseluruhan, kompleksitas waktu rata-rata adalah O(n log n) dan kompleksitas ruang adalah O(n).

## Referensi
[1] International Journal of Image and Graphics. (2021). An Enhanced Bidirectional Insertion Sort Over Classical Insertion Sort. International Journal of Image and Graphics, 21(2), 2150024.

[2] E. L. Pratiwi, Konsep Dasar Algoritma dan Pemrograman dengan Bahasa Java. Banjarmasin: Poiban Press, 2020.

[3]Sandria, Y. A., Nurhayoto, M. R. A., Ramadhani, L., Harefa, R. S., & Syahputra, A. (2022). Penerapan Algoritma Selection Sort untuk Melakukan Pengurutan Data dalam Bahasa Pemrograman PHP. Hello World Jurnal Ilmu Komputer, 1(4), 190–194. https://doi.org/10.56211/helloworld.v1i4.187.

[4] Nasution, R., Syahputra, A., Widiyanto, A., Subuhanto, D., & Abdillah, A. Y. (2023). Persepsi Mahasiswa Informatika Terhadap Keefektifan Algoritma Bubble Sort dalam Mengurutkan Data. Blend Sains Jurnal Teknik, 1(3), 220–225. https://doi.org/10.56211/blendsains.v1i3.186.

[5] Sunandar, E. (2019). Perbandingan Metode Selection Sort dan Insertion Sort Dalam Pengurutan Data Menggunakan Bahasa Program Java. PETIR, 12(2), 172–178. https://doi.org/10.33322/petir.v12i2.485