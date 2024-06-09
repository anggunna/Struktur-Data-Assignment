# <h1 align="center">Laporan Praktikum Modul Graph & Tree</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori

## Graph

### Pengertian Graph

Graph (graf) adalah struktur data yang terdiri dari himpunan simpul (vertices) dan himpunan sisi (edges) yang menghubungkan pasangan simpul. Graf digunakan untuk merepresentasikan berbagai macam masalah dalam ilmu komputer dan matematika, seperti jaringan komunikasi, hubungan sosial, dan banyak lagi. dengan rumus :
                               G = (V, E)
Dimana G adalah Graph, V adalah simpul atau vertex dan E sebagai sisi atau edge.

![Introduction-to-Graphs](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/7afd8e9a-02d9-4c58-9397-f6cadd3df5d9)


### Jenis-jenis Graph

**1. Graph Nol**
   Suatu graf disebut graf nol jika tidak ada sisi pada graf tersebut.

**2. Graph Sepele**
   Graf yang hanya mempunyai satu titik sudut, merupakan graf terkecil yang mungkin ada. 

![J2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/40987a87-e906-4dfb-8256-075ae798a092)

**3. Graph Tidak Berarah**
   Graf yang sisi-sisinya tidak mempunyai arah. Artinya node adalah pasangan tak berurutan dalam definisi setiap sisi. 

**4. Graph Terarah**
   Graf yang sisinya mempunyai arah. Yaitu node-node yang diurutkan berpasangan dalam definisi setiap sisi.

![J4](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/afa8ad5a-2945-4e3c-90c0-2ea916e510ff)

**5. Graph Terhubung**
   Graf dimana dari suatu simpul kita dapat mengunjungi simpul lain dalam graf tersebut disebut graf terhubung. 

**6. Graph Terputus**
   Graf yang paling sedikit satu simpulnya tidak dapat dijangkau dari suatu simpul disebut graf terputus.

![J6](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/60129392-9552-4c94-be6f-0ca4aa4f3e2f)

**7. Graph Reguler**
   Graf yang setiap simpulnya sama dengan K disebut graf beraturan K.

**8. Graph Lengkap**
   Graf yang setiap simpulnya mempunyai sisi terhadap simpul lainnya.

![J8](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/b9c31990-e9eb-444a-8079-75cd4958e7cb)

**9. Graph Siklus**
   Graf yang grafnya merupakan siklus itu sendiri, derajat setiap simpulnya adalah 2. 

**10. Graph Siklik**
    Graf yang memuat paling sedikit satu siklus disebut graf siklik.

![J10](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/c4cb019f-1812-453e-9e95-aa67023c223a)

**11. Graph Asiklik Terarah**
    Graf Berarah yang tidak mengandung siklus apa pun. 

**12. Graph Bipartit**
    Graf yang simpulnya dapat dibagi menjadi dua himpunan sehingga simpul pada setiap himpunan tidak mempunyai sisi di antara keduanya.

![J12](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/71941608-8139-435b-bc3e-62e6f70889ed)

**13. Graph Tertimbang**
    - Graf yang sisi-sisinya telah ditentukan dengan bobot yang sesuai disebut graf berbobot. 
    - Graf berbobot selanjutnya dapat diklasifikasikan menjadi graf berbobot terarah dan graf berbobot tidak berarah. 


### Representasi Struktur Data Graph

1. Representasi Matriks Ketetanggaan dari Struktur Data Grafik:
   Dalam metode ini, grafik disimpan dalam bentuk matriks 2D dimana baris dan kolom menunjukkan simpul. Setiap entri dalam matriks mewakili bobot tepi antara simpul-simpul tersebut.

![R1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/ccdc8930-e281-45ed-b187-24c2d0b03241)

2. Representasi Grafik Kedekatan Daftar:
   Grafik ini direpresentasikan sebagai kumpulan daftar tertaut. Ada array penunjuk yang menunjuk ke tepi yang terhubung ke titik itu.
![R2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/f2a99936-463c-49d2-a4d0-5ed5b4786207)


## Tree

### Pengertian Tree

Tree (pohon) adalah jenis khusus dari graf yang tidak mengandung siklus dan terhubung. Dalam tree, terdapat simpul khusus yang disebut root, dan setiap simpul lainnya memiliki satu jalur unik ke root. Struktur data pohon adalah struktur data khusus untuk menyimpan data secara hierarki. Digunakan untuk mengatur dan menyimpan data di komputer agar dapat digunakan lebih efektif. Ini terdiri dari node pusat, node struktural, dan sub-node, yang terhubung melalui tepi. Kita juga dapat mengatakan bahwa struktur data pohon memiliki akar, cabang, dan daun yang terhubung.

![Introduction-to-tree](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/48a59db5-8b91-4c95-b0c6-498645eefba4)


### Terminologi Dasar Dalam Struktur Data Pohon:
1. Node Induk: Node yang merupakan pendahulu dari suatu node disebut node induk dari node tersebut. {B} adalah simpul induk dari {D, E} .
2. Node Anak: Node yang merupakan penerus langsung dari suatu node disebut node anak dari node tersebut. Contoh: {D, E} adalah node anak dari {B}.
3. Node Akar: Simpul paling atas dari sebuah pohon atau simpul yang tidak memiliki simpul induk disebut simpul akar. {A } adalah simpul akar pohon. Pohon yang tidak kosong harus berisi tepat satu simpul akar dan tepat satu jalur dari akar ke semua simpul lain dalam pohon.
4. Node Daun atau Node Eksternal: Node yang tidak memiliki node anak disebut node daun. {K, L, M, N, O, P, G} adalah simpul daun pada pohon.
5. Leluhur suatu Node: Setiap node pendahulu pada jalur root ke node tersebut disebut Leluhur dari node tersebut. {A,B} adalah node leluhur dari node {E}
7. Keturunan: Sebuah simpul x adalah turunan dari simpul lain y jika dan hanya jika y merupakan nenek moyang dari x.
8. Saudara: Anak-anak dari simpul induk yang sama disebut saudara kandung. {D,E} disebut saudara kandung.
9. Level suatu node: Jumlah tepi pada jalur dari node akar ke node tersebut. Node akar memiliki level 0 .
10. Node internal: Node dengan setidaknya satu anak disebut Node Internal.
11. Tetangga Node: Node induk atau anak dari node tersebut disebut tetangga dari node tersebut.
12. Subpohon : Setiap simpul pohon beserta turunannya.


### Representasi Struktur Data Pohon:
Sebuah pohon terdiri dari sebuah simpul akar, dan nol atau lebih subpohon T 1 , T 2 , … , T k sedemikian rupa sehingga terdapat tepi dari simpul akar pohon ke simpul akar setiap subpohon. Subpohon dari suatu node X terdiri dari semua node yang memiliki node X sebagai node leluhurnya.

![Representation-of-Tree-Data-Structure](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/7edf5f83-5e34-42fe-a1e2-77d567add1cd)


### Operasi pada Tree

1. **Traversals:**
   - **Pre-order Traversal:** Kunjungi root, lalu subpohon kiri, dan kemudian subpohon kanan.
   - **In-order Traversal:** Kunjungi subpohon kiri, root, dan kemudian subpohon kanan.
   - **Post-order Traversal:** Kunjungi subpohon kiri, subpohon kanan, dan kemudian root.

2. **Insertion:**
   - Menambahkan simpul baru ke tree mengikuti aturan struktur tree (misalnya, untuk binary search tree, simpul baru ditempatkan di posisi yang sesuai).

3. **Deletion:**
   - Menghapus simpul dari tree dan menata ulang struktur tree sesuai dengan aturan tertentu.

4. **Searching:**
   - Mencari simpul tertentu dalam tree (misalnya, binary search tree memungkinkan pencarian yang efisien).


## Perbedaan antara Pohon dan Grafik:
   Pohon adalah tipe Struktur Data Grafik yang dibatasi, hanya dengan beberapa aturan lagi. Setiap pohon akan selalu menjadi grafik, tetapi tidak semua grafik akan menjadi pohon. Daftar Tertaut , Pohon , dan Tumpukan semuanya merupakan kasus khusus dari grafik. 

   ![tree_vs_graph](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/f5c3e86e-aa98-41de-a50b-447c1251bbc3)

### Graph
```plaintext
Graph:
  A ----- B
  | \     |
  |  \    |
  |   \   |
  |    \  |
  C ----- D
```

### Tree
```plaintext
Tree:
       A
      / \
     B   C
    / \
   D   E
```



## Guided 1

```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0},
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris] [kolom] != 0) {
                cout << " " << simpul[kolom] << " (" << busur[baris] [kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```

### Output: 
![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/79cbf787-2ee1-4c2f-8300-e1074791b429)

### Interpretasi
Kode di atas digunakan untuk mencetak program graf. Program ini mendefinisikan sebuah array string bernama simpul yang berisi nama tujuh kota: Ciamis, Bandung, Bekasi, Tasikmalaya, Cianjur, Purwokerto, dan Yogyakarta. Kota-kota ini mewakili simpul dari graf tersebut. Matriks ketetanggaan graf direpresentasikan oleh array 2D busur, di mana setiap elemen busur[i][j] menunjukkan bobot dari busur yang menghubungkan simpul i ke simpul j. Jika busur[i][j] bernilai nol, itu berarti tidak ada busur langsung dari simpul i ke simpul j.

Fungsi tampilGraph melakukan iterasi melalui setiap simpul dan mencetak busur keluar beserta bobotnya. Untuk setiap simpul, fungsi ini memeriksa setiap simpul lainnya untuk melihat apakah terdapat busur (yaitu, bobotnya tidak nol). Jika busur ada, fungsi ini mencetak simpul tujuan dan bobot busur tersebut dalam format tertentu. Dalam fungsi main, program hanya memanggil fungsi tampilGraph untuk menampilkan graf. Outputnya menunjukkan setiap kota diikuti dengan koneksi langsungnya ke kota lain, termasuk bobot dari koneksi-koneksi tersebut.


## Guided 2

```C++
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode *zero = new TNode(0);
    // 0
    // /\
    // NULL

    TNode *one = new TNode(1);
    TNode *five = new TNode(5);
    TNode *seven = new TNode(7);
    TNode *eight = new TNode(8);
    TNode *nine = new TNode(9);

    seven->left = one;
    // 7
    // /\
    // 1 NULL

    seven->right = nine;
    // 7
    // /\
    // 1 9

    one->left = zero;
    // 7
    // /\
    // 1 9
    // /\
    // 0 NULL

    one->right = five;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5

    nine->left = eight;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5
    // /
    // 8 NULL

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```

#### Output: 
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/944d2a51-c837-43fb-8d03-1269c0980550)

#### Interpretasi
Program yang diberikan mengimplementasikan pohon biner dan melakukan tiga jenis traversal: pre-order, in-order, dan post-order. Berikut adalah rincian strukturnya:

*1. Struktur TNode:*
Atribut:
data: Menyimpan nilai data simpul.
left: Pointer ke anak kiri.
right: Pointer ke anak kanan.
Konstruktor:
Menginisialisasi data dengan nilai yang diberikan.
Mengatur left dan right ke NULL.

*2. Fungsi Traversal:*
a. preOrder(TNode node):
Mencetak nilai data simpul saat ini.
Melakukan traversal ke anak kiri.
Melakukan traversal ke anak kanan.
b. inOrder(TNode node):
Melakukan traversal ke anak kiri.
Mencetak nilai data simpul saat ini.
Melakukan traversal ke anak kanan.
c. postOrder(TNode node):
Melakukan traversal ke anak kiri.
Melakukan traversal ke anak kanan.
Mencetak nilai data simpul saat ini.

*3. Fungsi main():*
Membuat simpul-simpul pohon biner menggunakan operator new.
Menghubungkan simpul-simpul sesuai dengan struktur pohon yang diinginkan.
Memanggil tiga jenis traversal untuk menampilkan urutan nilai-nilai simpul.



## Unguided 

### 1.	Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.
```C++
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function untuk menampilkan graf
void tampilGraph_2311110022(const vector<string>& simpul, const vector<vector<int>>& busur) {
    cout << setw(10) << " ";
    for (const auto& s : simpul) {
        cout << setw(10) << s;
    }
    cout << endl;

    // Menampilkan baris-baris
    for (int i = 0; i < simpul.size(); i++) {
        cout << setw(10) << simpul[i];
        for (int j = 0; j < simpul.size(); j++) {
            cout << setw(10) << busur[i][j];
        }
        cout << endl;
    }
}

int main() {
    int jumlahSimpul; // Menambah simpul
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    vector<string> simpul(jumlahSimpul);
    vector<vector<int>> busur(jumlahSimpul, vector<int>(jumlahSimpul, 0));

    cout << "Silakan masukkan nama simpul:" << endl; // Menambah nama simpul
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    cout << "Silakan masukkan bobot antar simpul:" << endl; // Menambah bobot antar simpul
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << simpul[i] << " --> " << simpul[j] << " = ";
            cin >> busur[i][j];
        }
    }

    // Menampilkan graf yang telah dimasukkan
    cout << endl << "Graf yang telah dimasukkan:" << endl;
    tampilGraph_2311110022(simpul, busur);

    return 0;
}
```

#### Output :
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/88d297c6-f5ed-4022-a67e-3ff2268df8bd)

### Interpretasi
Kode di atas digunakan untuk menampilkan program graf dengan menggunakan inputan dari user. Function tampilGraph_2311110022 didefinisikan untuk menampilkan graf dalam format yang rapi. Fungsi ini menerima dua parameter: sebuah vektor simpul yang berisi nama-nama simpul dan sebuah matriks 2D busur yang berisi bobot antara simpul-simpul tersebut. Dalam fungsi ini, nama-nama simpul dicetak sebagai header kolom, diikuti oleh baris-baris yang menampilkan nama simpul serta bobot-bobot yang terhubung dengan simpul-simpul lainnya. Di dalam fungsi main, program dimulai dengan meminta pengguna untuk memasukkan jumlah simpul. Jumlah ini kemudian digunakan untuk menginisialisasi vektor simpul dan matriks 2D busur dengan ukuran yang sesuai. Pengguna kemudian diminta untuk memasukkan nama-nama simpul, yang disimpan dalam vektor simpul.

Selanjutnya, program meminta pengguna untuk memasukkan bobot antar simpul. Dalam proses ini, setiap pasangan simpul (i, j) diminta bobotnya, yang kemudian disimpan dalam matriks busur. Jika tidak ada busur antara dua simpul tertentu, pengguna dapat memasukkan nilai nol. Setelah semua data dimasukkan, program menampilkan graf yang telah dibuat dengan memanggil fungsi tampilGraph_2311110022.


### 2.	Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!
```C++
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Inisialisasi node
struct TreeNode {
    string value;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(string val) : value(val), left(nullptr), right(nullptr) {}
};

// Buat node baru
TreeNode* createNode(string value) {
    return new TreeNode(value);
}

// Tambah node
TreeNode* insertNode(TreeNode* root, string value) {
    if (!root) {
        return createNode(value);
    }

    char direction;
    cout << "Masukkan 'L' untuk " << value << " subpohon kiri " << root->value << " atau 'R' untuk subpohon kanan: ";
    cin >> direction;

    if (direction == 'L' || direction == 'l') {
        root->left = insertNode(root->left, value);
    } else if (direction == 'R' || direction == 'r') {
        root->right = insertNode(root->right, value);
    } else {
        cout << "Arah tidak valid. Node belum dimasukan.\n";
    }

    return root;
}

// Pre-order traversal
void preOrder(TreeNode* node) {
    if (node) {
        cout << node->value << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

// In-order traversal
void inOrder(TreeNode* node) {
    if (node) {
        inOrder(node->left);
        cout << node->value << " ";
        inOrder(node->right);
    }
}

// Post-order traversal
void postOrder(TreeNode* node) {
    if (node) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->value << " ";
    }
}

int main() { // Main program
    TreeNode* root = nullptr;
    int choice;
    string value;

    while (true) { // Menu
        cout << "\nMenu Data Tree:\n";
        cout << "1. Tambah simpul\n";
        cout << "2. Tampilkan pre-order\n";
        cout << "3. Tampilkan in-order\n";
        cout << "4. Tampilkan post-order\n";
        cout << "5. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1: // Tambah nilai simpul
                cout << "Masukkan nilai simpul: ";
                cin >> value;
                if (!root) {
                    root = createNode(value);
                } else {
                    root = insertNode(root, value);
                }
                break;
            case 2: // Menampilkan pre-order
                cout << "Pre-order: ";
                preOrder(root);
                cout << endl;
                break;
            case 3: // Menampilkan in-order
                cout << "In-order: ";
                inOrder(root);
                cout << endl;
                break;
            case 4: // Menampilkan post-order
                cout << "Post-order: ";
                postOrder(root);
                cout << endl;
                break;
            case 5: // Keluar
                return 0;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}
```
#### Output :
![unguided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/51d78672-2e84-4594-9105-1ca2fa737ed7)

### Interpretasi
Kode di atas digunakan untuk mencetak modifikasi dari program guided 2 mengenai tree. Struktur TreeNode didefinisikan untuk merepresentasikan setiap simpul dalam pohon, dengan atribut nilai value, serta pointer ke anak kiri left dan anak kanan right. Fungsi createNode digunakan untuk membuat simpul baru, sementara fungsi insertNode digunakan untuk menambahkan simpul baru ke pohon, berdasarkan arah yang dipilih pengguna (kiri atau kanan). Program utama dimulai dengan inisialisasi akar pohon sebagai nullptr. Dalam sebuah loop, pengguna disajikan dengan menu yang memungkinkan mereka untuk menambahkan simpul baru atau menampilkan pohon dalam berbagai urutan. Saat pengguna memilih untuk menambahkan simpul, program meminta mereka untuk menentukan arah (kiri atau kanan) untuk setiap simpul baru relatif terhadap simpul yang ada.

Fungsi-fungsi preOrder, inOrder, dan postOrder digunakan untuk menampilkan pohon dalam urutan pre-order, in-order, dan post-order, masing-masing. Dalam setiap urutan ini, simpul-simpul pohon dikunjungi dan nilainya dicetak sesuai dengan aturan traversal yang berlaku. Program berakhir ketika pengguna memilih angka 5 untuk keluar dari menu.



## Referensi
[1] Kadafi, A. R., Budi, E. S., & Putra, R. B. D. (2019). Pemanfaatan Pohon Keputusan dan Graf Dalam Pemetaan Karyawan Berbasis Kompetensi. JURIKOM (Jurnal Riset Komputer), 6(6), 563-569.

[2] GeeksforGeeks, "Introduction to Tree Data Structure," [Online]. Available: https://www.geeksforgeeks.org/introduction-to-tree-data-structure/. [Accessed: Jun. 9, 2024].

[3] Karumanchi, N. (2011). Data Structures and Algorithms Made Easy: 700 Data Structure and Algorithmic Puzzles. CreateSpace.
