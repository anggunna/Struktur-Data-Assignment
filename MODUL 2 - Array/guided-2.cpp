#include <iostream>
using namespace std;

int main()
{
  // deklarasi variabel
  int maks, a, i = 1, lokasi;
  // masukan data
  cout << "Masukkan panjang array: ";
  cin >> a;
  int array[a];
  cout << "Masukkan " << a << " angka\n";
  for (i = 0; i < a; i++)
  {
    cout << "Array ke-" << (i) << ": ";
    cin >> array[i];
  }
  // nilai maksimum
  maks = array[0];
  for (i = 0; i < a; i++)
  {
    if (array[i] > maks)
    {
      maks = array[i];
      lokasi = i;
    }
  }
  cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}

