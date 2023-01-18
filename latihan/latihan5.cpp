//judul: menampilkan angka 10+9+8+7+6+5+4+3+2+1
#include <iostream>
using namespace std;

//kamus:
int i, total;

//deskripsi:
int main()
{
    i= 10;
    while (i>=1)
    {
        cout << i << " + " ;
        total=total+i;
        i--;
    }
  cout << "hasilnya adalah: " << total;
}
