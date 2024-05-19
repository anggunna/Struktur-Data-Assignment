# <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Priority queue adalah struktur data abstrak yang memungkinkan penyisipan, penghapusan, dan akses elemen berdasarkan prioritasnya. Heap adalah implementasi umum dari priority queue yang menggunakan struktur pohon biner untuk menjaga properti heap, yaitu setiap elemen memiliki nilai yang lebih besar atau sama dengan (untuk max-heap) atau lebih kecil atau sama dengan (untuk min-heap) nilai kedua anaknya [1].

![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/bcf2d29a-2bd9-4973-a356-e4a68ad33de2)

**Konsep Dasar**
Priority Queue:
Elemen memiliki nilai prioritas yang menentukan urutan aksesnya.
Operasi dasar:
insert(element, priority): Menyisipkan elemen dengan prioritas yang diberikan.
extract-min(): Menghapus dan mengembalikan elemen dengan prioritas terkecil (min-heap).
extract-max(): Menghapus dan mengembalikan elemen dengan prioritas terbesar (max-heap).
peek(): Mengembalikan elemen dengan prioritas terkecil/terbesar tanpa menghapusnya.
Heap:
Implementasi priority queue menggunakan struktur pohon biner.
Memenuhi properti heap:
Setiap elemen memiliki nilai yang lebih besar atau sama dengan (max-heap) atau lebih kecil atau sama dengan (min-heap) nilai kedua anaknya.
Operasi dasar diimplementasikan dengan efisiensi waktu logaritmik.

**Implementasi**

Berbagai implementasi heap tersedia, dengan kompleksitas waktu operasi dasar yang bervariasi.

![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/6d900622-70aa-418a-97d5-3b5b12e8f2fa)

Max-heap:
Binary heap: Implementasi klasik dengan kompleksitas O(log n) untuk semua operasi.
Fibonacci heap: Struktur data yang lebih kompleks dengan kompleksitas amortisasi O(1) untuk insert dan extract-min, dan O(log n) untuk peek [2].
Min-heap:
Analog dengan max-heap, dengan properti heap terbalik.

**Aplikasi**

Priority queue dan heap memiliki berbagai aplikasi dalam ilmu komputer, termasuk:
Algoritma pencarian: Algoritma Dijkstra dan A* menggunakan heap untuk menemukan jalur terpendek dalam graf [3].
Simulasi: Heap digunakan untuk mensimulasikan antrian prioritas dalam sistem operasi, seperti antrian proses [4].
Pemrosesan data: Heap digunakan untuk mengurutkan data secara efisien [5].
Kesimpulan

Priority queue dan heap merupakan struktur data fundamental dengan berbagai aplikasi penting dalam ilmu komputer. Pemahaman tentang konsep dasar, operasi, dan implementasinya sangatlah penting bagi para ilmuwan komputer dan pengembang perangkat lunak.

## Guided 

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority : " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    remove(3);
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
}
```

#### Output: 
![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/b4eace00-ed15-4992-933e-2f7e6744085e)

#### Interpretasi
Kode di atas merupakan implementasi dari heap maksimum yang menggunakan array H untuk menyimpan elemen-elemen heap dan variabel heapSize untuk melacak ukuran heap saat ini. Fungsi-fungsi dasar heap yang disediakan meliputi:

insert: Menambahkan elemen baru ke dalam heap dan memperbaiki posisi elemen tersebut dengan shiftUp untuk mempertahankan sifat heap maksimum.
extractMax: Menghapus dan mengembalikan elemen terbesar dari heap, kemudian memperbaiki heap dengan shiftDown.
changePriority: Mengubah prioritas elemen pada posisi tertentu dan memperbaiki heap dengan shiftUp atau shiftDown sesuai kebutuhan.
remove: Menghapus elemen pada posisi tertentu dengan menggantinya dengan nilai yang lebih besar dari elemen maksimum saat ini, lalu memanggil extractMax untuk mengeluarkannya dari heap.

Dalam fungsi main, beberapa elemen dimasukkan ke dalam heap, kemudian ditampilkan urutan elemen-elemen dalam heap. Setelah itu, elemen dengan prioritas tertinggi diekstraksi, dan heap diperbaiki serta ditampilkan kembali. Selanjutnya, prioritas salah satu elemen diubah, dan heap kembali diperbaiki serta ditampilkan. Terakhir, salah satu elemen dihapus, dan hasil akhir heap ditampilkan. Program ini menunjukkan bagaimana operasi-operasi heap dilakukan dan bagaimana heap berubah setelah setiap operasi.

## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.
```C++
#include <iostream>
#include <algorithm>

int H[50]; 
int heapSize = -1; 

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) { 
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int element;
        std::cin >> element;
        insert(element);
    }

    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << " \n";

    std::cout << "Node with maximum priority : " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << " \n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << " \n";

    remove(3);
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
}
```
#### Output :
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/652712f3-02c7-4e0e-b9e0-7c1afdb54ed8)


#### Interpretasi
Kode di atas adalah implementasi dari sebuah heap maksimum, yaitu struktur data yang mendukung operasi priority queue. Heap ini disimpan dalam array H dengan ukuran maksimal 50 elemen. Fungsi-fungsi yang disediakan mencakup operasi dasar heap seperti insert, extractMax, changePriority, dan remove.

Fungsi insert menambahkan elemen baru ke dalam heap dan memastikan properti heap maksimum tetap terjaga dengan memanggil shiftUp.
Fungsi extractMax menghapus dan mengembalikan elemen terbesar dari heap, kemudian menyesuaikan heap dengan shiftDown.
Fungsi changePriority mengubah prioritas suatu elemen di heap, kemudian menyesuaikan posisinya menggunakan shiftUp atau shiftDown tergantung dari perubahan prioritasnya.
Fungsi remove menghapus elemen tertentu dari heap dengan cara mengubah nilainya menjadi lebih besar dari elemen maksimum saat ini, kemudian memanggil extractMax untuk mengeluarkannya dari heap.

Program utama meminta pengguna untuk memasukkan sejumlah elemen, kemudian menambahkan elemen-elemen tersebut ke dalam heap. Program ini juga mendemonstrasikan operasi extractMax, changePriority, dan remove, serta mencetak kondisi heap setelah setiap operasi untuk menunjukkan perubahan yang terjadi.
  
## Referensi
[1] T. H. Cormen, C. E. Leiserson, R. L. Rivest, dan C. Stein, Introduction to Algorithms, 3rd ed. Cambridge, MA: MIT Press, 2009.

[2] R. Sedgewick dan P. Bender, Algorithms in C++, 3rd ed. Upper Saddle River, NJ: Pearson Prentice Hall, 2008.

[3] R. E. Tarjan, Data Structures and Algorithms. Reading, MA: Addison-Wesley, 1983.

[4] T. Johnson, Discrete Structures, 7th ed. Upper Saddle River, NJ: Pearson Prentice Hall, 2005.

[5] M. T. Goodrich, R. Tamassia, dan M. H. Goldwasser, Data Structures and Algorithms in Java, 6th ed. Hoboken, NJ: John Wiley & Sons, 2014.