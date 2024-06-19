# <h1 align="center">Laporan Praktikum Modul Hash Table</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Hash table adalah struktur data yang memungkinkan penyimpanan dan pengambilan data dengan cepat menggunakan teknik hashing. Teknik hashing ini mengubah data (biasanya berupa kunci) menjadi indeks, yang kemudian digunakan untuk menyimpan nilai yang terkait di dalam tabel. Hash table terdiri dari beberapa komponen utama yaitu kunci (key), fungsi hash (hash function), dan bucket atau slot tempat penyimpanan data[1].

Fungsi hash mengubah kunci menjadi indeks dalam array atau tabel, dan nilai ini digunakan untuk menemukan lokasi penyimpanan data dengan cepat. Salah satu keuntungan utama dari hash table adalah efisiensi pencarian, penyisipan, dan penghapusan data, yang secara umum dapat dilakukan dalam waktu O(1) pada kasus terbaik dan rata-rata.

Namun, hash table juga memiliki tantangan, seperti penanganan bentrokan (collision), yang terjadi ketika dua kunci berbeda menghasilkan indeks yang sama. Metode umum untuk mengatasi bentrokan ini meliputi chaining (menggunakan struktur data seperti linked list di setiap indeks) dan open addressing (mencari slot kosong lain dalam tabel)[2].

![Hash Table](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/38a6c90c-385b-4aa7-bc4d-93fa1e84a24b)

## Operasi Hash Table
1. Penyisipan (Insertion):
Proses: Fungsi hash digunakan untuk mengubah kunci (key) menjadi indeks dalam tabel. Jika indeks tersebut kosong, data disimpan di lokasi tersebut. Jika terjadi bentrokan (collision), metode penanganan bentrokan seperti chaining atau open addressing digunakan.
Kompleksitas: O(1) dalam kasus terbaik dan rata-rata.

2. Pencarian (Searching):
Proses: Fungsi hash mengubah kunci menjadi indeks, kemudian indeks tersebut diperiksa untuk melihat apakah data yang dicari ada di lokasi tersebut. Jika terjadi bentrokan, metode penanganan bentrokan digunakan untuk mencari data.
Kompleksitas: O(1) dalam kasus terbaik dan rata-rata.

3. Penghapusan (Deletion):
Proses: Fungsi hash mengubah kunci menjadi indeks, kemudian indeks tersebut diperiksa untuk melihat apakah data yang ingin dihapus ada di lokasi tersebut. Jika ditemukan, data dihapus. Jika terjadi bentrokan, metode penanganan bentrokan digunakan untuk memastikan semua data yang relevan tetap dapat diakses.
Kompleksitas: O(1) dalam kasus terbaik dan rata-rata.

4. Update:
Proses: Operasi ini melibatkan pencarian kunci terlebih dahulu menggunakan fungsi hash untuk menemukan indeks di mana data tersimpan. Setelah data ditemukan, nilai yang terkait dengan kunci tersebut diperbarui. Jika kunci tidak ditemukan, tergantung pada implementasi, data baru bisa disisipkan sebagai kunci baru atau operasi gagal.
Kompleksitas: O(1) dalam kasus terbaik dan rata-rata, karena operasi ini melibatkan pencarian dan kemudian pembaruan.

5. Traversal:
Proses: Traversal atau iterasi dalam hash table melibatkan mengunjungi setiap elemen yang tersimpan dalam tabel. Proses ini bisa dilakukan dengan memeriksa setiap indeks dalam tabel dan mengunjungi semua elemen yang mungkin disimpan di sana (dalam kasus chaining, mengunjungi setiap elemen di linked list).
Kompleksitas: O(n), di mana n adalah jumlah total elemen yang tersimpan dalam hash table, karena setiap elemen harus diperiksa sekali.


## Collision Resolution 
Collision Resolution dalam tabel hash adalah metode yang digunakan untuk menangani situasi di mana dua atau lebih elemen menghasilkan indeks yang sama dari fungsi hash mereka, menyebabkan tabrakan. Berikut adalah penjelasan singkat tentang masing-masing metode:

![Collision Resolution](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/8ad3c5f1-df56-4be4-b039-b46ba8a56e81)

### 1. Open Hashing (Chaining)
**Open Hashing**, atau yang sering disebut sebagai chaining, adalah metode di mana setiap elemen yang mengalami tabrakan disimpan dalam daftar terpisah (linked list) di setiap slot tabel hash. Jika terjadi tabrakan, elemen baru hanya ditambahkan ke daftar tersebut[3].

**Keuntungan**:
- Mudah diimplementasikan.
- Tidak memerlukan pencarian slot kosong.

**Kerugian**:
- Membutuhkan lebih banyak memori untuk menyimpan linked list.
- Waktu pencarian bisa menjadi lambat jika banyak elemen disimpan dalam satu slot.

### 2. Closed Hashing
Closed Hashing menyimpan semua elemen secara langsung dalam tabel hash. Metode ini tidak menggunakan linked list. Sebaliknya, jika terjadi tabrakan, elemen baru ditempatkan di slot yang berbeda sesuai dengan aturan tertentu[1].

#### a. Linear Probing
**Linear Probing** adalah metode di mana ketika terjadi tabrakan, algoritma mencari slot berikutnya yang kosong dalam tabel hash secara linear (sekuensial).

**Keuntungan**:
- Implementasi sederhana.
- Efisiensi tinggi pada tabel hash yang tidak terlalu penuh.

**Kerugian**:
- Masalah clustering, di mana banyak elemen mengelompok dalam satu area tabel, mengurangi efisiensi.

#### b. Quadratic Probing
**Quadratic Probing** menggunakan rumus kuadratik untuk menentukan slot berikutnya ketika terjadi tabrakan. Misalnya, jika posisi awal adalah \( h \) dan terjadi tabrakan, posisi berikutnya adalah \( h + 1^2, h + 2^2, h + 3^2 \), dan seterusnya.

**Keuntungan**:
- Mengurangi clustering dibandingkan dengan linear probing.
- Lebih efisien dalam penggunaan ruang tabel hash.

**Kerugian**:
- Lebih kompleks dibandingkan linear probing.
- Masih ada kemungkinan terjadinya clustering sekunder.

#### c. Double Hashing
**Double Hashing** menggunakan dua fungsi hash. Jika terjadi tabrakan, fungsi hash kedua digunakan untuk menentukan langkah pencarian berikutnya[4].

**Keuntungan**:
- Mengurangi clustering lebih efektif dibandingkan linear dan quadratic probing.
- Memastikan distribusi elemen yang lebih merata.

**Kerugian**:
- Memerlukan dua fungsi hash yang baik untuk menghindari tabrakan.
- Implementasi lebih kompleks.

**Kesimpulan**:
Setiap metode memiliki kelebihan dan kekurangannya sendiri, dan pilihan metode yang digunakan bergantung pada kebutuhan spesifik dan karakteristik data yang akan disimpan.



## Guided 1

```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```

### Output: 
![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/848cf58b-6ebf-4d86-8e1d-beafae3975de)

### Interpretasi
Kode di atas menggunakan array dinamis “table” untuk menyimpan bucket dalam hash table. Setiap bucket diwakili oleh sebuah linked list dengan setiap node merepresentasikan satu item data. Fungsi hash sederhana hanya menggunakan modulus untuk memetakan setiap input kunci ke nilai indeks array.



## Guided 2

```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
```

#### Output: 
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/90fea105-477b-45fb-ab8b-47d35de077e9)

#### Interpretasi
Kode di atas contoh pada program, class HashNode merepresentasikan setiap node dalam hash table, yang terdiri dari nama dan nomor telepon karyawan. Class HashMap digunakan untuk mengimplementasikan struktur hash table dengan menggunakan vector yang menampung pointer ke HashNode. Fungsi hashFunc digunakan untuk menghitung nilai hash dari nama karyawan yang diberikan, dan fungsi insert digunakan untuk menambahkan data baru ke dalam hash table. Fungsi remove digunakan untuk menghapus data dari hash table, dan fungsi searchByName digunakan untuk mencari nomor telepon dari karyawan dengan nama yang diberikan.



## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.
```C++
#include <iostream>
#include <unordered_map>
#include <vector>

struct Mahasiswa {
    std::string nim;
    int nilai;
};

class HashTable {
public:
    void tambahData(const std::string& nim, int nilai) {
        if (data.find(nim) != data.end()) {
            std::cout << "Data dengan NIM " << nim << " sudah ada.\n";
        } else {
            data[nim] = nilai;
            std::cout << "Data berhasil ditambahkan.\n";
        }
    }

    void hapusData(const std::string& nim) {
        if (data.erase(nim)) {
            std::cout << "Data dengan NIM " << nim << " berhasil dihapus.\n";
        } else {
            std::cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
        }
    }

    void cariDataNIM(const std::string& nim) {
        auto it = data.find(nim);
        if (it != data.end()) {
            std::cout << "NIM: " << it->first << ", Nilai: " << it->second << "\n";
        } else {
            std::cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
        }
    }

    void cariDataNilai(int minNilai, int maxNilai) {
        std::vector<Mahasiswa> hasil;
        for (const auto& pair : data) {
            if (pair.second >= minNilai && pair.second <= maxNilai) {
                hasil.push_back({pair.first, pair.second});
            }
        }
        if (hasil.empty()) {
            std::cout << "Tidak ada data yang ditemukan dalam rentang nilai " << minNilai << " - " << maxNilai << ".\n";
        } else {
            std::cout << "Data dalam rentang nilai " << minNilai << " - " << maxNilai << ":\n";
            for (const auto& mhs : hasil) {
                std::cout << "NIM: " << mhs.nim << ", Nilai: " << mhs.nilai << "\n";
            }
        }
    }

private:
    std::unordered_map<std::string, int> data;
};

int main() {
    HashTable ht;
    int pilihan;
    std::string nim;
    int nilai;
    int minNilai, maxNilai;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Tambah data\n";
        std::cout << "2. Hapus data\n";
        std::cout << "3. Cari data berdasarkan NIM\n";
        std::cout << "4. Cari data berdasarkan rentang nilai (80 - 90)\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilih opsi: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                std::cout << "Masukkan nilai: ";
                std::cin >> nilai;
                ht.tambahData(nim, nilai);
                break;
            case 2:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                ht.hapusData(nim);
                break;
            case 3:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                ht.cariDataNIM(nim);
                break;
            case 4:
                minNilai = 80;
                maxNilai = 90;
                ht.cariDataNilai(minNilai, maxNilai);
                break;
            case 5:
                std::cout << "Keluar dari program.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}
```

#### Output :
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/ff2887ef-78f3-4faf-aed6-f62ca52ee378)

### Interpretasi
Kode di atas menggunakan hash table dalam C++ untuk menyimpan data mahasiswa yang terdiri dari NIM (Nomor Induk Mahasiswa) dan nilai. Struktur Mahasiswa digunakan untuk mendefinisikan data mahasiswa dengan dua atribut: nim dan nilai. Kelas HashTable mengelola data menggunakan unordered_map dari C++ STL untuk menyimpan pasangan kunci (NIM) dan nilai.

Fungsi tambahData digunakan untuk menambahkan data mahasiswa baru ke dalam hash table. Jika NIM sudah ada, data tidak akan ditambahkan dan program akan menampilkan pesan bahwa data sudah ada. Fungsi hapusData menghapus data mahasiswa berdasarkan NIM. Jika NIM tidak ditemukan, program akan menampilkan pesan bahwa data tidak ditemukan.

Fungsi cariDataNIM mencari dan menampilkan data mahasiswa berdasarkan NIM. Jika NIM tidak ditemukan, program akan menampilkan pesan bahwa data tidak ditemukan. Fungsi cariDataNilai mencari dan menampilkan data mahasiswa yang nilainya berada dalam rentang tertentu, yaitu antara 80 dan 90. Jika tidak ada data yang memenuhi kriteria tersebut, program akan menampilkan pesan bahwa tidak ada data yang ditemukan dalam rentang nilai tersebut.

Bagian main menyediakan antarmuka pengguna dengan menu untuk mengakses fungsi-fungsi dalam kelas HashTable. Pengguna dapat memilih opsi untuk menambahkan data, menghapus data, mencari data berdasarkan NIM, mencari data berdasarkan rentang nilai, atau keluar dari program. Program akan terus berjalan hingga pengguna memilih opsi untuk keluar.
  

## Referensi
[1] Knuth, D. E. (1998). The Art of Computer Programming, Volume 3: Sorting and Searching. Addison-Wesley. 
    [Link](https://dl.acm.org/doi/10.5555/280635)

[2] Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). "Introduction to Algorithms." MIT Press.

[3] Patgiri, R., & Patgiri, R. (2019). Hash table: an efficient data structure for concurrent objects. *Journal of Computer Science and Technology*, 34(1), 57-75. [Link](https://link.springer.com/article/10.1007/s11390-019-1904-8)

[4] Gonnet, G. H., & Baeza-Yates, R. (1991). Handbook of Algorithms and Data Structures: In Pascal and C. Addison-Wesley. 
    [Link](https://dl.acm.org/doi/10.5555/533877)
