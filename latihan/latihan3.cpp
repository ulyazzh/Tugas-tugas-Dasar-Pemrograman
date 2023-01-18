//judul: menampilkan angka loncat 29 27 25 23 21 19 17
#include <iostream>
using namespace std;

//kamus:
int i;

//deskripsi:
main()
{
    i = 30;
    while (i>=17)
    {
        if (i%2)
        {
            cout << i << " ";
        }
        i--;
    }
}
