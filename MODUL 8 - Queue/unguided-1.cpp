#include <iostream>
using namespace std;

// Struktur node untuk linked list
struct Node {
    string data;
    Node* next;
};

// Fungsi untuk membuat node baru
Node* createNode(string data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan node ke linked list
void enqueue(Node** head, string data) {
    Node* newNode = createNode(data);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* lastNode = *head;
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}

// Fungsi untuk menghapus node dari linked list
void dequeue(Node** head) {
    if (*head == nullptr) {
        cout << "Antrian kosong" << endl;
    } else {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

// Fungsi untuk menghitung jumlah node dalam linked list
int countQueue(Node* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

// Fungsi untuk menghapus semua node dalam linked list
void clearQueue(Node** head) {
    Node* temp = *head;
    while (temp != nullptr) {
        *head = (*head)->next;
        delete temp;
        temp = *head;
    }
}

// Fungsi untuk melihat isi linked list
void viewQueue(Node* head) {
    cout << "Data antrian teller:" << endl;
    while (head != nullptr) {
        cout << head->data << endl;
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;
    enqueue(&head, "Anggun");
    enqueue(&head, "Markle");
    viewQueue(head);
    cout << "Jumlah antrian = " << countQueue(head) << endl;
    dequeue(&head);
    viewQueue(head);
    cout << "Jumlah antrian = " << countQueue(head) << endl;
    clearQueue(&head);
    viewQueue(head);
    cout << "Jumlah antrian = " << countQueue(head) << endl;
    return 0;
}
