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