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