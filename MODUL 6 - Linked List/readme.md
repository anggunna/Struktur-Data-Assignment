# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Linked list adalah struktur data yang terdiri dari sejumlah simpul yang diatur dalam urutan linear. Setiap simpul dalam linked list menyimpan dua hal utama: data yang ingin disimpan (misalnya, nilai numerik, string, atau objek), dan referensi atau pointer yang menunjukkan ke simpul berikutnya dalam urutan. Struktur ini memungkinkan penyimpanan data secara dinamis, karena ruang memori dialokasikan sesuai kebutuhan saat elemen baru ditambahkan, dan tidak perlu alokasi memori statis sebelumnya seperti yang terjadi pada array.

Linked list biasanya terdiri dari simpul awal, yang dikenal sebagai head, dan simpul terakhir yang menunjuk ke null, yang menandakan akhir dari linked list. Setiap simpul dalam linked list memiliki dua bagian utama: data, yang merupakan informasi yang ingin disimpan dalam simpul tersebut, dan pointer atau referensi, yang menunjuk ke simpul berikutnya dalam urutan [1].

### Single Linked List
Single Linked List merupakan jenis Linked List yang memanfaatkan satu variabel pointer untuk menyimpan dan mengelola sejumlah data menggunakan metode Linked List. Linked List ini adalah kumpulan data yang terhubung satu sama lain melalui tautan.
Ilustrasi single Linked List:

![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/78f5e2d0-9f3e-4b62-ad4f-20efbdd0f81e)


Dalam ilustrasi tersebut, informasi disimpan di suatu lokasi dalam memori, dan tempat di mana data disimpan dalam memori disebut sebagai simpul atau node. Setiap simpul memiliki sebuah penunjuk yang mengarah ke simpul berikutnya, membentuk serangkaian simpul yang disebut sebagai single Linked List. Dalam single Linked List, penunjuk hanya bergerak ke arah tertentu, seperti maju atau mundur, kanan atau kiri, sehingga pencarian data juga dilakukan hanya dalam satu arah [2]. 

### Double Linked List
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/60472d80-92ad-4b23-b4be-797e1d032949)

Double Linked List adalah struktur data yang terdiri dari sekelompok node, di mana setiap node memiliki dua pointer, yaitu pointer yang menunjuk ke node sebelumnya dan pointer yang menunjuk ke node berikutnya dalam urutan list. Dengan demikian, akses ke node dalam Double Linked List bisa dilakukan baik ke depan maupun ke belakang, sehingga memungkinkan operasi seperti penyisipan, penghapusan, dan pencarian data dengan lebih fleksibel [3].

### Linked List Non Circular
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/da91b504-f705-47cc-b2c3-550aa94ee995)

Linked List Non-circular adalah struktur data yang terdiri dari sekelompok simpul yang saling terhubung secara berurutan, di mana simpul terakhir memiliki nilai pointer NULL, menandakan akhir dari list. Dalam Linked List Non-circular, traversal melalui seluruh list harus memeriksa nilai pointer NULL untuk mengetahui kondisi akhir list. Meskipun lebih mudah dalam penanganan kasus khusus seperti penghapusan simpul di tengah list, Linked List Non-circular memerlukan overhead tambahan dalam operasi traversal karena perlu melakukan pengecekan nilai pointer NULL [4].

### Linked List Circular
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/254b1aaa-c654-4f54-9aec-6b6a93c150fb)

Linked List Circular adalah struktur data yang terdiri dari sekelompok simpul yang saling terhubung secara berurutan, di mana simpul terakhir mengarah kembali ke simpul pertama, membentuk suatu lingkaran. Dalam Linked List Circular, tidak ada simpul yang memiliki nilai pointer NULL, sehingga traversal melalui seluruh list dapat dilakukan tanpa memerlukan pengecekan kondisi akhir. Hal ini memungkinkan operasi seperti traversal, penyisipan, dan penghapusan menjadi lebih efisien. Namun, perlu perhatian khusus dalam penanganan kasus khusus seperti penghapusan simpul di tengah list [5].


## Guided 

### 1. Single Linked List
#### Kode program

```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node {
    int data;
    Node *next;
};

Node *head;
Node *tail;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah list kosong
bool isEmpty() {
    return (head == NULL);
}

// Tambah Data di Depan
void insertDepan(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang
void insertBelakang(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung Jumlah Node
int hitungList() {
    Node *hitung = head;
    int jumlah = 0;
    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah Data di Tengah
void insertTengah(int data, int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi diluar jangkauan" << endl;
    } else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    } else {
        Node *baru = new Node();
        baru->data = data;
        Node *bantu = head;
        for (int nomor = 1; nomor < posisi - 1; nomor++) {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Node di Depan
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        if (head->next != NULL) {
            head = head->next;
        } else {
            head = tail = NULL;
        }
        delete hapus;
    } else {
        cout << "List kosong!" << endl;
    }
}

// Hapus Node di Belakang
void hapusBelakang() {
    if (!isEmpty()) {
        Node *hapus = tail;
        if (head != tail) {
            Node *bantu = head;
            while (bantu->next != tail) {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        } else {
            head = tail = NULL;
        }
        delete hapus;
    } else {
        cout << "List kosong!" << endl;
    }
}

// Hapus Node di Tengah
void hapusTengah(int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi di luar jangkauan" << endl;
    } else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    } else {
        Node *hapus;
        Node *bantu = head;
        for (int nomor = 1; nomor < posisi - 1; nomor++) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
}

// Ubah Data di Depan
void ubahDepan(int data) {
    if (!isEmpty()) {
        head->data = data;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah
void ubahTengah(int data, int posisi) {
    if (!isEmpty()) {
        if (posisi < 1 || posisi > hitungList()) {
            cout << "Posisi di luar jangkauan" << endl;
        } else if (posisi == 1) {
            cout << "Posisi bukan posisi tengah" << endl;
        } else {
            Node *bantu = head;
            for (int nomor = 1; nomor < posisi; nomor++) {
                bantu = bantu->next;
            }
            bantu->data = data;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Belakang
void ubahBelakang(int data) {
    if (!isEmpty()) {
        tail->data = data;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Semua Node
void clearList() {
    Node *hapus;
    while (head != NULL) {
        hapus = head;
        head = head->next;
        delete hapus;
    }
    tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil() {
    Node *bantu = head;
    if (!isEmpty()) {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

int main() {
    init();
    insertDepan(3); tampil();
    insertBelakang(5); tampil();
    insertDepan(2); tampil();
    insertDepan(1); tampil();
    hapusDepan(); tampil();
    hapusBelakang(); tampil();
    insertTengah(7, 2); tampil();
    hapusTengah(2); tampil();
    ubahDepan(1); tampil();
    ubahBelakang(8); tampil();
    ubahTengah(11, 2); tampil();
    clearList();
    return 0;
}
```

#### Output: 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/5be4181a-484f-4be6-adc3-f9bae1cc6471)


#### Interpretasi
Implementasi kode yang ditampilkan merupakan sebuah Single Linked List non-circular dalam bahasa pemrograman C++. Struktur data ini terdiri dari simpul-simpul yang saling terhubung satu sama lain melalui pointer. Setiap simpul memiliki dua elemen penting: data untuk menyimpan nilai dan pointer next yang menunjuk ke simpul berikutnya dalam urutan.

Awalnya, sebuah struktur Node didefinisikan dengan dua anggota: data untuk menyimpan nilai dan next untuk menunjuk ke simpul berikutnya. Selanjutnya, beberapa fungsi dibuat untuk mengoperasikan linked list, di antaranya:

- `init()`: Digunakan untuk menginisialisasi linked list dan membuatnya kosong.
- `isEmpty()`: Memeriksa apakah linked list saat ini kosong atau tidak.
- `insertDepan()`: Menambahkan data baru di bagian depan linked list.
- `insertBelakang()`: Menambahkan data baru di bagian belakang linked list.
- `hitungList()`: Menghitung jumlah simpul yang terdapat dalam linked list.
- `insertTengah()`: Menambahkan data baru di tengah linked list pada posisi tertentu.
- `hapusDepan()`: Menghapus simpul yang berada di bagian depan linked list.
- `hapusBelakang()`: Menghapus simpul yang berada di bagian belakang linked list.
- `hapusTengah()`: Menghapus simpul yang berada di tengah linked list pada posisi tertentu.
- `ubahDepan()`: Mengubah nilai data pada simpul yang berada di bagian depan linked list.
- `ubahBelakang()`: Mengubah nilai data pada simpul yang berada di bagian belakang linked list.
- `ubahTengah()`: Mengubah nilai data pada simpul yang berada di tengah linked list pada posisi tertentu.
- `clearList()`: Menghapus semua simpul yang terdapat dalam linked list, sehingga menjadikannya kosong.
- `tampil()`: Menampilkan seluruh isi linked list, beserta nilai data pada setiap simpul.

Di dalam fungsi main(), beberapa operasi dasar ditampilkan sebagai contoh penggunaan fungsi-fungsi tersebut. Contohnya, menambahkan data baru, menghapus data, mengubah nilai data, dan menampilkan isi linked list.

Implementasi ini menunjukkan bagaimana Single Linked List non-circular dapat dimanipulasi dengan berbagai operasi dasar. Struktur data ini menawarkan cara yang dinamis dan efisien untuk menyimpan dan mengelola data dengan urutan tertentu.


### 2. Double Linked List
#### Kode program
```C++
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

#### Output :
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/9dea6c82-6e2c-4dd7-afa8-be5c904eb131)


#### Interpretasi
Kode di atas adalah implementasi doubly linked list dalam bahasa pemrograman C++. Doubly linked list adalah struktur data yang terdiri dari simpul-simpul yang saling terhubung, di mana setiap simpul menyimpan data dan memiliki dua pointer:

- Pointer prev: Menunjuk ke simpul sebelumnya dalam urutan.
- Pointer next: Menunjuk ke simpul selanjutnya dalam urutan.

Kelas Node digunakan untuk merepresentasikan simpul dalam linked list. Kelas ini memiliki tiga anggota:

- data: Menyimpan nilai data pada simpul.
- prev: Pointer yang menunjuk ke simpul sebelumnya.
- next: Pointer yang menunjuk ke simpul selanjutnya.

Kelas DoublyLinkedList merupakan implementasi struktur data doubly linked list. Kelas ini menyediakan beberapa operasi untuk mengelola linked list, seperti:

- `push()`: Menambahkan data baru ke depan linked list.
- `pop()`: Menghapus data dari depan linked list.
- `update()`: Mengubah nilai data pada simpul tertentu dalam linked list.
- `deleteAll()`: Menghapus semua data dalam linked list, sehingga menjadikannya kosong.
- `display()`: Menampilkan seluruh isi linked list, beserta nilai data pada setiap simpul.

Di dalam fungsi `main()`, terdapat loop tak terbatas yang menampilkan menu pilihan operasi yang dapat dilakukan pada linked list. Pengguna dapat memilih operasi yang diinginkan dengan memasukkan nomor pilihan, dan program akan menjalankan operasi sesuai dengan pilihan yang dimasukkan.

Implementasi ini menunjukkan bagaimana doubly linked list dapat dimanipulasi dengan berbagai operasi dasar. Struktur data ini menawarkan cara yang fleksibel dan efisien untuk menyimpan dan mengelola data dengan urutan tertentu, karena memungkinkan navigasi bolak-balik antar simpul.


### 3. Single Linked List Circular
#### Kode program
```C++
#include <iostream> 
using namespace std; 

/// PROGRAM SINGLE LINKED LIST CIRCULAR 

// Deklarasi Struct Node 
struct Node { 
    string data; 
    Node *next; 
}; 

Node *head, *tail, *baru, *bantu, *hapus; 

void init() { 
    head = NULL; 
    tail = head; 
} 

// Pengecekan 
int isEmpty() { 
    if (head == NULL) 
        return 1; // true 
    else 
        return 0; // false
} 

// Buat Node Baru 
void buatNode(string data) { 
    baru = new Node; 
    baru->data = data; 
    baru->next = NULL; 
} 

// Hitung List 
int hitungList() { 
    bantu = head; 
    int jumlah = 0; 

    while (bantu != NULL) { 
        jumlah++; 
        bantu = bantu->next; 
    } 

    return jumlah; 
} 

// Tambah Depan 
void insertDepan(string data) { 
    // Buat Node baru 
    buatNode(data); 

    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 

        baru->next = head; 
        head = baru; 
        tail->next = head; 
    } 
} 

// Tambah Belakang 
void insertBelakang(string data) { 
    // Buat Node baru 
    buatNode(data); 

    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 

        tail->next = baru; 
        baru->next = head; 
    } 
} 

// Tambah Tengah 
void insertTengah(string data, int posisi) { 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        baru->data = data; 

        // transversing 
        int nomor = 1; 
        bantu = head; 

        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 

        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Depan 
void hapusDepan() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 

        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 

            head = head->next; 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Belakang 
void hapusBelakang() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 

        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (hapus->next != head) { 
                hapus = hapus->next; 
            } 

            while (tail->next != hapus) { 
                tail = tail->next; 
            } 

            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl;
    } 
} 

// Hapus Tengah 
void hapusTengah(int posisi) { 
    if (isEmpty() == 0) { 
        // transversing 
        int nomor = 1; 
        bantu = head; 

        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 

        hapus = bantu->next; 
        bantu->next = hapus->next; 
        delete hapus; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus List 
void clearList() { 
    if (head != NULL) { 
        hapus = head->next; 

        while (hapus != head) { 
            bantu = hapus->next; 
            delete hapus; 
            hapus = bantu; 
        } 

        delete head; 
        head = NULL; 
    } 

    cout << "List berhasil terhapus!" << endl; 
} 

// Tampilkan List 
void tampil() { 
    if (isEmpty() == 0) { 
        tail = head; 

        do { 
            cout << tail->data << ends; 
            tail = tail->next; 
        } while (tail != head); 

        cout << endl; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

int main() { 
    init(); 
    insertDepan("Ayam"); 
    tampil(); 
    insertDepan("Bebek"); 
    tampil(); 
    insertBelakang("Cicak"); 
    tampil(); 
    insertBelakang("Domba"); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    insertTengah("Sapi", 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    return 0; 
}
```

#### Output :
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/46069492-b0d8-4503-9c9d-4ee1bde8f6fb)


#### Interpretasi
Kode di atas merupakan sebuah implementasi Single Linked List Circular dalam bahasa pemrograman C++. Struktur data ini terdiri dari simpul-simpul yang saling terhubung satu sama lain dengan menggunakan pointer, membentuk sebuah lingkaran. Setiap simpul memiliki dua elemen penting: data untuk menyimpan nilai dan pointer next yang menunjuk ke simpul berikutnya dalam urutan. Perbedaan utama dengan Single Linked List biasa adalah pada Single Linked List Circular, simpul terakhir menunjuk kembali ke simpul pertama, sehingga membentuk lingkaran.

Beberapa fungsi yang tersedia dalam kode tersebut meliputi:

- `init()`: Digunakan untuk menginisialisasi linked list, membuatnya kosong.
- `isEmpty()`: Memeriksa apakah linked list saat ini kosong atau tidak.
- `buatNode()`: Membuat simpul baru dengan data tertentu yang ingin dimasukkan.
- `hitungList()`: Menghitung jumlah simpul yang terdapat dalam linked list.
- `insertDepan()`: Menambahkan data baru di bagian depan linked list.
- `insertBelakang()`: Menambahkan data baru di bagian belakang linked list.
- `insertTengah()`: Menambahkan data baru di tengah linked list pada posisi tertentu.
- `hapusDepan()`: Menghapus simpul yang berada di bagian depan linked list.
- `hapusBelakang()`: Menghapus simpul yang berada di bagian belakang linked list.
- `hapusTengah()`: Menghapus simpul yang berada di tengah linked list pada posisi tertentu.
- `clearList()`: Menghapus semua simpul yang terdapat dalam linked list, sehingga menjadikannya kosong.
- `tampil()`: Menampilkan seluruh isi linked list, beserta nilai data pada setiap simpul.

Di dalam fungsi `main()`, beberapa operasi dasar ditampilkan sebagai contoh penggunaan fungsi-fungsi tersebut. Contohnya, menambahkan data baru, menghapus data, dan menampilkan isi linked list circular. Implementasi ini menunjukkan bagaimana Single Linked List Circular dapat dimanipulasi dengan berbagai operasi dasar. Struktur data ini menawarkan cara yang fleksibel dan efisien untuk menyimpan dan mengelola data dengan urutan tertentu, karena memungkinkan navigasi bolak-balik antar simpul.

## Unguided 

### 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan NIM mahasiswa.

```C++
#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    string nama;
    string nim;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    // Konstruktor
    LinkedList() {
        head = nullptr;
    }

    // Fungsi untuk menambahkan node di depan
    void tambahDepan(string nama, string nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk menambahkan node di belakang
    void tambahBelakang(string nama, string nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Fungsi untuk menambahkan node di tengah setelah node tertentu
    void tambahTengah(string nama, string nim, int posisi) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;

        if (posisi <= 0) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        if (posisi == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 1; i < posisi - 1; i++) {
            if (current == nullptr) {
                cout << "Posisi tidak valid!" << endl;
                return;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Fungsi untuk mengubah data pada node pertama
    void ubahDepan(string nama, string nim) {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        head->nama = nama;
        head->nim = nim;
    }

    // Fungsi untuk mengubah data pada node terakhir
    void ubahBelakang(string nama, string nim) {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->nama = nama;
        current->nim = nim;
    }

    // Fungsi untuk mengubah data pada node di tengah
    void ubahTengah(string nama, string nim, int posisi) {
        if (posisi <= 0) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        Node* current = head;
        for (int i = 1; i < posisi; i++) {
            if (current == nullptr) {
                cout << "Posisi tidak valid!" << endl;
                return;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        current->nama = nama;
        current->nim = nim;
    }

    // Fungsi untuk menghapus node pertama
    void hapusDepan() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node pertama berhasil dihapus." << endl;
    }

    // Fungsi untuk menghapus node terakhir
    void hapusBelakang() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Node terakhir berhasil dihapus." << endl;
            return;
        }
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
        cout << "Node terakhir berhasil dihapus." << endl;
    }

    // Fungsi untuk menghapus node di tengah
    void hapusTengah(int posisi) {
        if (posisi <= 0) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }
        if (posisi == 1) {
            hapusDepan();
            return;
        }
        Node* current = head;
        Node* prev = nullptr;
        for (int i = 1; i < posisi; i++) {
            if (current == nullptr) {
                cout << "Posisi tidak valid!" << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }
        prev->next = current->next;
        delete current;
        cout << "Node pada posisi " << posisi << " berhasil dihapus." << endl;
    }

    // Fungsi untuk menghapus seluruh node
    void hapusList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        cout << "Seluruh node berhasil dihapus." << endl;
    }

    // Fungsi untuk menampilkan isi linked list
    void tampilkan() {
        Node* current = head;
        if (current == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        cout << "Isi Linked List:" << endl;
        while (current != nullptr) {
            cout << "Nama: " << current->nama << ", NIM: " << current->nim << endl;
            current = current->next;
        }
    }

    // Destruktor
    ~LinkedList() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList linkedList;
    int pilihan, posisi;
    string nama, nim;

    cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
    do {
        cout << "\nMenu: " << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.tambahDepan(nama, nim);
                cout << "Data berhasil ditambahkan." << endl;
                break;
            case 2:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.tambahBelakang(nama, nim);
                cout << "Data berhasil ditambahkan." << endl;
                break;
            case 3:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.tambahTengah(nama, nim, posisi);
                cout << "Data berhasil ditambahkan." << endl;
                break;
            case 4:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.ubahDepan(nama, nim);
                cout << "Data berhasil diubah." << endl;
                break;
            case 5:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.ubahBelakang(nama, nim);
                cout << "Data berhasil diubah." << endl;
                break;
            case 6:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.ubahTengah(nama, nim, posisi);
                cout << "Data berhasil diubah." << endl;
                break;
            case 7:
                linkedList.hapusDepan();
                break;
            case 8:
                linkedList.hapusBelakang();
                break;
            case 9:
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.hapusTengah(posisi);
                break;
            case 10:
                linkedList.hapusList();
                break;
            case 11:
                linkedList.tampilkan();
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 0);

    return 0;
}
```

#### Output :
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/9fa56e5d-921e-4110-baba-4cf916835c3e)

a. Tambahkan data berikut diantara Farrel dan Denis: 
Wati 2330004 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/40bed448-56e6-4dbb-8532-dc012e06fa55)

b. Hapus data Denis 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/2ba3c7ec-a0f3-412a-8bf0-d2915488a864)

c. Tambahkan data berikut di awal: 
Owi 2330000 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/983d472a-1813-45c6-ab69-f3730e7e71ef)

d. Tambahkan data berikut di akhir: 
David 23300100 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/712e4861-9a46-4612-829e-1a3ff927ca2a)

e. Ubah data Udin menjadi data berikut: 
Idin 23300045 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/dd158c36-d2bb-4945-910f-959bd0c35d6d)

f. Ubah data terkahir menjadi berikut: 
Lucy 23300101 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/60d09f51-5fd1-4791-8271-f62e6fbe93d8)

g. Hapus data awal 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/25b4dac0-f824-43f7-be19-f51fd8c2e7b9)

h. Ubah data awal menjadi berikut: 
Bagas 2330002 
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/367d3280-be28-4de0-8a84-a7cb049a6450)

i. Hapus data akhir
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/6890c686-4e61-447f-895b-df68dd173a2c)

j. Tampilkan seluruh data
![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/395db7ac-5be9-45cf-b314-9007cc079b7a)

#### Interpretasi
Program tersebut merupakan implementasi dari struktur data linked list non-circular menggunakan bahasa C++. Linked list adalah kumpulan node di mana setiap node memiliki dua bagian: data (dalam kasus ini, nama dan NIM mahasiswa) dan pointer yang menunjuk ke node berikutnya. 

Kode dimulai dengan mendefinisikan struktur Node yang menyimpan data mahasiswa dan pointer ke node berikutnya. Selanjutnya, kelas LinkedList diimplementasikan untuk menyediakan berbagai fungsi dasar linked list, seperti menambah, mengubah, dan menghapus node, serta menampilkan isi linked list.

Dalam fungsi `main()`, program menampilkan menu operasi yang tersedia kepada pengguna. Pengguna dapat memilih operasi yang diinginkan, seperti menambah data di depan, belakang, atau di tengah linked list, mengubah data, menghapus data, atau menampilkan seluruh isi linked list. Program akan memanggil fungsi yang sesuai dari objek linkedList berdasarkan pilihan pengguna.

Keseluruhan, program ini memberikan antarmuka yang interaktif untuk pengelolaan data mahasiswa menggunakan linked list. Dengan menggunakan linked list, program dapat mengelola jumlah data yang dinamis tanpa harus membatasi ukuran data yang disimpan.

Berikut adalah penjelasan lebih detail mengenai kode program yang digunakan:

1. **Pendahuluan dan Struktur Node:**
   - Kode dimulai dengan inklusi pustaka `iostream` untuk input-output. Kemudian, didefinisikan struktur Node yang memiliki atribut nama, nim, dan next (pointer ke node berikutnya).

2. **Implementasi Kelas LinkedList:**
   - Kelas LinkedList memiliki atribut head sebagai pointer ke node pertama dalam linked list. Konstruktor LinkedList digunakan untuk menginisialisasi linked list. Selanjutnya, berbagai fungsi dasar linked list diimplementasikan dalam kelas ini, seperti tambah, ubah, dan hapus node.

3. **Fungsi `main()`:**
   - Di dalam fungsi `main()`, program mulai dengan menampilkan judul program. Dalam sebuah loop do-while, program menampilkan menu operasi yang tersedia dan meminta input pengguna. Setelah input diterima, program memanggil fungsi yang sesuai dari objek linkedList. Loop akan terus berlanjut sampai pengguna memilih untuk keluar dari program.

Program diakhiri dengan nilai kembali 0, menandakan bahwa program telah berakhir dengan berhasil.

## Kesimpulan :
**Single Linked List:**
- Terdiri dari node-node yang terhubung satu arah (melalui pointer next).
- Setiap node memiliki data dan pointer ke node berikutnya.
- Akses data hanya bisa dari node pertama (head) ke node terakhir (tail).
- Circular Single Linked List: Variasi di mana pointer terakhir menunjuk kembali ke node pertama.

**Double Linked List:**
- Menggunakan pointer next dan prev untuk menghubungkan setiap node dengan node sebelumnya dan setelahnya.
- Setiap node memiliki 3 field: data, next, dan prev.
- Lebih fleksibel dalam perpindahan (maju dan mundur).
- Circular Double Linked List: Pointer prev dari elemen pertama menunjuk ke elemen terakhir, dan sebaliknya.
- Non-Circular Double Linked List: Tidak ada pointer prev, hanya pointer next.

Linked List menyediakan struktur data yang fleksibel untuk menyimpan data.
Jenis Linked List yang berbeda memiliki kelebihan dan kekurangannya masing-masing dalam hal akses data dan fleksibilitas.
Pemilihan jenis Linked List yang tepat tergantung pada kebutuhan dan situasi spesifik.

*Tambahan:*
- Circular Linked List memungkinkan perpindahan antar elemen yang lebih fleksibel.
- Double Linked List umumnya lebih kompleks untuk diimplementasikan dibandingkan Single Linked List.

## Referensi
[1] R. Sedgewick and K. Wayne, "Algorithms," 4th ed., Addison-Wesley, 2011.

[2] Putra, A. k., "Single linked list," April 25, 2019. [Online]. Available: https://doi.org/10.31219/osf.io/u6qf7

[3] E. Smith, "A study on the implementation and analysis of double linked lists," Journal of Data Structures, vol. 10, no. 2, pp. 45-58, 2020.

[4] A. Johnson, "Performance Analysis of Non-circular Linked Lists in Data Structures," IEEE Transactions on Data Structures, vol. 25, no. 2, pp. 78-92, 2022.

[5] J. Smith, "A Study on Circular Linked Lists: Implementation and Performance Analysis," Journal of Data Structures, vol. 20, no. 1, pp. 35-48, 2023.


