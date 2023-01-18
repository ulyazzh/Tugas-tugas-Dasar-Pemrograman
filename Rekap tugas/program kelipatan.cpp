//judul: program menghitung kelipatan
//oleh: uly atmi azizah

#include <iostream>
using namespace std;

//kamus:
int a, total = 0;

//diskripsi:

main()
{
    cout <<"PROGRAM MENGHITUNG KELIPATAN ANGKA 6"<< endl;
    cout <<"____________________________________"<< endl;
    cout <<""<< endl;

    while (a<=100)
    {
      cout << a << endl;
      a = a + 6;
        total = total + a;
    }
    cout <<"____________________________"<< endl;
    cout <<"Total kelipatan adalah = "<<total << endl;
    cout <<"____________________________" << endl;
    return (0);

}
