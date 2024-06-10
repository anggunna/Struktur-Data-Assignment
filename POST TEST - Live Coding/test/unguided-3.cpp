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