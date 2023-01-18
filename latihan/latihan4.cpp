//judul: menampilkan angka 1 sampai 10 lalu dijumlahkan
#include <iostream>
using namespace std;

//kamus:
int i, total;

//deskripsi:
main()
{
    i = 1;

    while (i<=10)
    {
        cout << i << " " << endl;
        total = total + i;
        i++;
    }
    cout << "totalnya adalah: " << total;
}
