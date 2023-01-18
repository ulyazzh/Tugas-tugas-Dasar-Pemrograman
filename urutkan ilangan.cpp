/*
judul: mengurutkan bilangan
oleh: uly atmi azizah
7 oktober 2022
di rumah
*/

#include <iostream>
using namespace std;

//kamus
int a, b, c, d, e;

//diskripsi
main()
{
    cout << "MENGURUTKAN BILANGAN" << endl;
    cout << "masukkan nilai a: ";
    cin >> a;
    cout << "masukkan nilai b: ";
    cin >> b;
    cout << "masukkan nilai c: ";
    cin >> c;
    cout << "masukkan nilai d: ";
    cin >> d;
    cout << "masukkan nilai e: ";
    cin >> e;
    if ((a==b)&&(b==c)&&(c==d)&&(d==e))
    {
        cout << "nilai a = b = c = d = e" << endl;return 0;
    }
    else
    {
        if ((a<b)&&(b<c)&&(c<d)&&(d<e))
        {
            cout "bilangan terkecil : " << a << endl;
            cout "bilangan terbesar : " << e << endl;
            cout <<a<<"|" <<b<< "|" <<c<< "|" <<d<< "|" <<e<< endl;
        }
        else if ((a<b)&&(b<c)&&(c<e)&&(e<d))
        {
            cout "bilangan terkecil: " << a << endl;
            cout "bilangan terbesar :" << d << endl;
        }
    }
}
