# <h1 align="center">Laporan Post Test Live Coding</h1>
<p align="center">Anggun Dewanti (2311110022)</p>


## Unguided 

### 1. Diketahui data sebagai berikut {1,2,3,4,5,5}. Carilah angka 5 berada pada index berapa saja menggunakan sequential search!
```C++
#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<int> data = {1, 2, 3, 4, 5, 5};
   int target = 5;
   vector<int> indices;


   for (int i = 0; i < data.size(); ++i) {
       if (data[i] == target) {
           indices.push_back(i);
       }
   }


   cout << "Nilai " << target << " ditemukan pada indeks: ";
   for (int i = 0; i < indices.size(); ++i) {
       cout << indices[i] << " ";
   }
   cout << endl;


   return 0;
}
```

### Interpretasi singkat mengenai outputnya
Kode di atas digunakan untuk mencari angka 5 yang berada di index (?), menggunakan sequential search. Dengan data {1, 2, 3, 4, 5, 5}. Maka, Nilai 5 ditemukan pada indeks: 4 5. 



### 2. Tulislah fungsi rekursif yang menerima sebuah bilangan bulat dan mengembalikan nilai faktorial dari n.
```C++
#include <iostream>
using namespace std;


int faktorial(int n) {
   if (n == 0) {
       return 1;
   }
   else {
       return n * faktorial(n - 1);
   }
}


int main() {
   int n;
   cout << "Masukkan sebuah bilangan bulat non-negatif: ";
   cin >> n;


   if (n < 0) {
       cout << "Bilangan harus non-negatif." << endl;
   } else {
       cout << "Faktorial dari " << n << " adalah " << faktorial(n) << endl;
   }


   return 0;
}
```

### Interpretasi singkat mengenai outputnya
Kode di atas digunakan untuk menerima sebuah bilangan bulat, dengan mengembalikan nilai faktorial dari n dengan menggunakan fungsi rekursif. Dengan, memasukkan sebuah bilangan bulat non-negatif "5" dan di ubah faktorial dari 5 adalah "120".



### 3. Lakukan sorting menggunakan bubble sort pada data berikut {5, 1, 4, 2, 8}
```C++
#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {
   for (int step = 0; step < size - 1; ++step) {
       for (int i = 0; i < size - step - 1; ++i) {
           if (array[i] > array[i + 1]) {
               int temp = array[i];
               array[i] = array[i + 1];
               array[i + 1] = temp;
           }
       }
   }
}


void printArray(int array[], int size) {
   for (int i = 0; i < size; ++i) {
       cout << array[i] << " ";
   }
   cout << endl;
}


int main() {
   int data[] = {5, 1, 4, 2, 8};
   int size = sizeof(data) / sizeof(data[0]);


   cout << "Array sebelum sorting: ";
   printArray(data, size);


   bubbleSort(data, size);


   cout << "Array setelah sorting: ";
   printArray(data, size);


   return 0;
}
```

### Interpretasi singkat mengenai outputnya
Kode di atas digunakan untuk mengurutkan angka dari kecil ke besar, menggunakan bubble sort. Dari data {5, 1, 4, 2, 8} menjadi (1, 2, 4, 5, 8)



### 4. Buatlah program C++ untuk mengimplementasikan struktur data single linked list  yang dapat melakukan operasi berikut:
    Menambahkan elemen di akhir linked list.
    Mencetak semua elemen dalam linked list.
    Menghapus elemen pertama (head) dalam linked list.
    Dengan menggunakan single list
```C++
#include <iostream>
using namespace std;


struct Node {
   int data;
   Node* next;
};


void append(Node*& head, int data) {
   Node* newNode = new Node();
   newNode->data = data;
   newNode->next = nullptr;


   if (head == nullptr) {
       head = newNode;
   } else {
       Node* temp = head;
       while (temp->next != nullptr) {
           temp = temp->next;
       }
       temp->next = newNode;
   }
}


void printList(Node* head) {
   Node* temp = head;
   while (temp != nullptr) {
       cout << temp->data << " ";
       temp = temp->next;
   }
   cout << endl;
}


void deleteFirst(Node*& head) {
   if (head == nullptr) {
       return;
   } else {
       Node* temp = head;
       head = head->next;
       delete temp;
   }
}


int main() {
   Node* head = nullptr;


   append(head, 1);
   append(head, 2);
   append(head, 3);


   cout << "Linked list setelah penambahan elemen: ";
   printList(head);


   deleteFirst(head);


   cout << "Linked list setelah penghapusan elemen pertama: ";
   printList(head);


   return 0;
}
```

### Interpretasi singkat mengenai outputnya
Kode di atas digunakan untuk mengimplementasikan struktur data single linked list  dengan melakukan operasi berikut:
    Menambahkan elemen di akhir linked list : 1, 2, 3
    Mencetak semua elemen dalam linked list,
    Menghapus elemen pertama (head) dalam linked list : menghapus 1 karna (head)
    Maka, Linked list setelah penghapusan elemen pertama: 2 3
