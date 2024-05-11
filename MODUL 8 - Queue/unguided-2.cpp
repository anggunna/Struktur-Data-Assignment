#include <iostream>
using namespace std;

// Node untuk merepresentasikan setiap elemen dalam linked list
struct Node {
    string nama;
    string nim;
    Node* next;
};

// Class untuk merepresentasikan queue menggunakan linked list
class Queue {
private:
    Node* front; // Node depan dari queue
    Node* rear;  // Node belakang dari queue

public:
    // Constructor untuk menginisialisasi queue kosong
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Method untuk menambahkan elemen ke belakang queue
    void enqueue(string nama, string nim) {
        // Membuat node baru
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        // Jika queue kosong, node baru menjadi front dan rear
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            // Menambahkan node baru di belakang queue
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Method untuk menghapus elemen dari depan queue
    void dequeue() {
        // Jika queue kosong, tidak ada yang dihapus
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }

        // Menyimpan node yang akan dihapus
        Node* temp = front;
        // Memindahkan front ke node berikutnya
        front = front->next;
        // Jika setelah penghapusan, queue menjadi kosong, rear juga harus diatur menjadi nullptr
        if (front == nullptr) {
            rear = nullptr;
        }
        // Menghapus node
        delete temp;
    }

    // Method untuk mengecek apakah queue kosong
    bool isEmpty() {
        return front == nullptr;
    }

    // Method untuk menampilkan isi dari queue
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        cout << "Data antrian mahasiswa:" << endl;
        Node* temp = front;
        while (temp != nullptr) {
            cout << "Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
            temp = temp->next;
        }
    }
};

int main() {
    // Membuat objek dari class Queue
    Queue queue;

    // Menambahkan elemen ke dalam queue dengan atribut Nama Mahasiswa dan NIM Mahasiswa
    queue.enqueue("Anggun", "2311110022");
    queue.enqueue("Markle", "2311110023");

    // Menampilkan isi queue
    queue.displayQueue();

    // Menghapus elemen dari depan queue
    queue.dequeue();

    // Menampilkan isi queue setelah penghapusan
    queue.displayQueue();

    return 0;
}