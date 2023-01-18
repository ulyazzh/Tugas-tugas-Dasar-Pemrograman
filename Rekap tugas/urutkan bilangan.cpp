//judul: Program mengurutkan bilangan
// oleh: Uly Atmi Azizah
// 8 oktober 2022

#include <iostream>
using namespace std;


//kamus
int a, b, c, d, e;
string ulang;


//diskripsi
main ()
{
    cout << "MENGURUTKAN BILANGAN" << endl;
    cout << "____________________" << endl;
    cout <<""<< endl;
    do {
    cout <<""<< endl;
    cout << "masukan nilai pertama : " ;
    cin >> a;
    cout << "masukan nilai kedua : " ;
    cin >> b;
    cout << "masukan nilai  ketiga : ";
    cin >> c;
    cout << "masukan nilai keempat : ";
    cin >> d;
    cout << "masukan nilai kelima : " ;
    cin >> e;

    cout <<""<< endl;
    cout << "urutannya adalah : ";

        if ((a<b)&&(b<c)&&(c<d)&&(d<e))
        {
            cout <<a<<"-"<<b<<"-"<<c<<"-"<<d<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
        }
        else if ((b<c)&&(c<d)&&(d<e)&&(e<a))
            {
            cout <<a<<"-"<<c<<"-"<<d<<"-"<<e<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }

        else if ((c<d)&&(d<e)&&(e<a)&&(a<b))
            {
            cout <<c<<"-"<<d<<"-"<<e<<"-"<<a<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
        else if ((d<e)&&(e<a)&&(a<b)&&(b<c))
            {
            cout <<d<<"-"<<e<<"-"<<a<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
        else if ((e<a)&&(a<b)&&(b<c)&&(c<d))
            {
            cout <<e<<"-"<<a<<"-"<<b<<"-"<<c<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<c)&&(c<d)&&(d<e)&&(e<b))
            {
            cout <<a<<"-"<<c<<"-"<<d<<"-"<<e<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((c<d)&&(d<e)&&(e<b)&&(b<a))
            {
            cout <<c<<"-"<<d<<"-"<<e<<"-"<<b<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((d<e)&&(e<b)&&(b<a)&&(a<c))
            {
            cout <<d<<"-"<<e<<"-"<<b<<"-"<<a<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((e<b)&&(b<a)&&(a<c)&&(c<d))
            {
            cout <<e<<"-"<<b<<"-"<<a<<"-"<<c<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }

         else if ((b<a)&&(a<c)&&(c<d)&&(d<e))
            {
            cout <<b<<"-"<<a<<"-"<<c<<"-"<<d<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((a<d)&&(d<e)&&(e<b)&&(b<c))
            {
            cout <<a<<"-"<<d<<"-"<<e<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((d<e)&&(e<b)&&(b<c)&&(c<a))
            {
            cout <<d<<"-"<<e<<"-"<<b<<"-"<<c<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((e<b)&&(b<c)&&(c<a)&&(a<d))
            {
            cout <<e<<"-"<<b<<"-"<<c<<"-"<<a<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }

         else if ((b<c)&&(c<a)&&(a<d)&&(d<e))
            {
            cout <<b<<"-"<<c<<"-"<<a<<"-"<<d<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((c<a)&&(a<d)&&(d<e)&&(e<b))
            {
            cout <<c<<"-"<<a<<"-"<<d<<"-"<<e<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }

         else if ((a<e)&&(e<b)&&(b<c)&&(c<d))
            {
            cout <<a<<"-"<<e<<"-"<<b<<"-"<<c<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((e<b)&&(b<c)&&(c<d)&&(d<a))
            {
            cout <<e<<"-"<<b<<"-"<<c<<"-"<<d<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((b<c)&&(c<d)&&(d<a)&&(a<e))
            {
            cout <<b<<"-"<<c<<"-"<<d<<"-"<<a<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((c<d)&&(d<a)&&(a<e)&&(e<b))
            {
            cout <<c<<"-"<<d<<"-"<<a<<"-"<<e<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((d<a)&&(a<e)&&(e<b)&&(b<c))
            {
            cout <<d<<"-"<<a<<"-"<<e<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<d)&&(d<b)&&(b<c)&&(c<e))
            {
            cout <<a<<"-"<<d<<"-"<<b<<"-"<<c<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((d<b)&&(b<c)&&(c<e)&&(e<a))
            {
            cout <<d<<"-"<<b<<"-"<<c<<"-"<<e<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((d<c)&&(c<e)&&(e<a)&&(a<d))
            {
            cout <<b<<"-"<<c<<"-"<<e<<"-"<<a<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((c<e)&&(e<a)&&(a<d)&&(d<b))
            {
            cout <<c<<"-"<<e<<"-"<<a<<"-"<<d<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((e<a)&&(a<d)&&(d<b)&&(b<c))
            {
            cout <<e<<"-"<<a<<"-"<<d<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((b<e)&&(e<d)&&(d<c)&&(c<a))
            {
            cout <<b<<"-"<<e<<"-"<<d<<"-"<<c<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((e<d)&&(d<c)&&(c<a)&&(a<b))
            {
            cout <<e<<"-"<<d<<"-"<<c<<"-"<<a<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((d<c)&&(c<a)&&(a<b)&&(b<e))
            {
            cout <<d<<"-"<<c<<"-"<<a<<"-"<<b<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((c<a)&&(a<b)&&(b<e)&&(e<d))
            {
            cout <<c<<"-"<<a<<"-"<<b<<"-"<<e<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((e<a)&&(a<b)&&(b<c)&&(c<d))
            {
            cout <<a<<"-"<<b<<"-"<<e<<"-"<<d<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((b<a)&&(a<d)&&(d<c)&&(c<e))
            {
            cout <<b<<"-"<<a<<"-"<<d<<"-"<<c<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((e<a)&&(a<b)&&(b<c)&&(c<d))
            {
            cout <<a<<"-"<<d<<"-"<<c<<"-"<<e<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((d<c)&&(c<e)&&(e<b)&&(b<a))
            {
            cout <<d<<"-"<<c<<"-"<<e<<"-"<<b<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((c<e)&&(e<b)&&(b<a)&&(a<d))
            {
            cout <<c<<"-"<<e<<"-"<<b<<"-"<<a<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((e<b)&&(b<a)&&(a<d)&&(d<c))
            {
            cout <<e<<"-"<<b<<"-"<<a<<"-"<<d<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((b<d)&&(d<c)&&(c<a)&&(a<e))
            {
            cout <<b<<"-"<<d<<"-"<<c<<"-"<<a<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((d<c)&&(c<a)&&(a<e)&&(e<b))
            {
            cout <<d<<"-"<<c<<"-"<<a<<"-"<<e<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((c<a)&&(a<e)&&(e<b)&&(b<d))
            {
            cout <<c<<"-"<<a<<"-"<<e<<"-"<<b<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((a<e)&&(e<b)&&(b<d)&&(d<e))
            {
            cout <<a<<"-"<<e<<"-"<<b<<"-"<<d<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((e<b)&&(b<d)&&(d<c)&&(c<a))
            {
            cout <<e<<"-"<<b<<"-"<<d<<"-"<<c<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((b<c)&&(c<e)&&(e<d)&&(d<a))
            {
            cout <<b<<"-"<<c<<"-"<<e<<"-"<<d<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((c<e)&&(e<d)&&(d<a)&&(a<b))
            {
            cout <<c<<"-"<<e<<"-"<<d<<"-"<<a<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((e<d)&&(d<a)&&(a<b)&&(b<c))
            {
            cout <<e<<"-"<<d<<"-"<<a<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((d<a)&&(a<b)&&(b<c)&&(c<e))
            {
            cout <<d<<"-"<<a<<"-"<<b<<"-"<<c<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((a<b)&&(b<c)&&(c<e)&&(e<d))
            {
            cout <<a<<"-"<<b<<"-"<<c<<"-"<<e<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((b<e)&&(e<c)&&(c<a)&&(a<d))
            {
            cout <<b<<"-"<<e<<"-"<<c<<"-"<<a<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((e<c)&&(c<a)&&(a<d)&&(d<b))
            {
            cout <<e<<"-"<<c<<"-"<<a<<"-"<<d<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((c<a)&&(a<d)&&(d<b)&&(b<e))
            {
            cout <<c<<"-"<<a<<"-"<<d<<"-"<<b<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((a<d)&&(d<b)&&(b<e)&&(e<c))
            {
            cout <<a<<"-"<<d<<"-"<<b<<"-"<<e<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((d<b)&&(b<e)&&(e<c)&&(c<a))
            {
            cout <<d<<"-"<<b<<"-"<<e<<"-"<<c<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((c<b)&&(b<a)&&(a<e)&&(e<d))
            {
            cout <<c<<"-"<<b<<"-"<<a<<"-"<<e<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((b<a)&&(a<e)&&(e<d)&&(d<c))
            {
            cout <<b<<"-"<<a<<"-"<<e<<"-"<<d<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((a<e)&&(e<d)&&(d<c)&&(c<b))
            {
            cout <<a<<"-"<<e<<"-"<<d<<"-"<<c<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((e<a)&&(a<b)&&(b<c)&&(c<d))
            {
            cout <<e<<"-"<<d<<"-"<<c<<"-"<<b<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((d<c)&&(c<b)&&(b<a)&&(a<e))
            {
            cout <<d<<"-"<<c<<"-"<<b<<"-"<<a<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((c<d)&&(d<a)&&(a<b)&&(b<e))
            {
            cout <<c<<"-"<<d<<"-"<<a<<"-"<<b<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((d<a)&&(a<b)&&(b<e)&&(e<c))
            {
            cout <<d<<"-"<<a<<"-"<<b<<"-"<<e<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((a<b)&&(b<e)&&(e<c)&&(c<d))
            {
            cout <<a<<"-"<<b<<"-"<<e<<"-"<<c<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((b<e)&&(e<c)&&(c<d)&&(d<a))
            {
            cout <<b<<"-"<<e<<"-"<<c<<"-"<<d<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((e<c)&&(c<d)&&(d<a)&&(a<b))
            {
            cout <<e<<"-"<<c<<"-"<<d<<"-"<<a<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<b)&&(b<d)&&(d<c)&&(c<e))
            {
            cout <<a<<"-"<<b<<"-"<<d<<"-"<<c<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((b<d)&&(d<c)&&(c<e)&&(e<a))
            {
            cout <<b<<"-"<<d<<"-"<<c<<"-"<<e<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((d<c)&&(c<e)&&(e<a)&&(a<b))
            {
            cout <<d<<"-"<<c<<"-"<<e<<"-"<<a<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((c<e)&&(e<a)&&(a<b)&&(b<d))
            {
            cout <<c<<"-"<<e<<"-"<<a<<"-"<<b<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((e<a)&&(a<b)&&(b<d)&&(d<c))
            {
            cout <<e<<"-"<<a<<"-"<<b<<"-"<<d<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<b)&&(b<e)&&(e<c)&&(c<d))
            {
            cout <<a<<"-"<<b<<"-"<<e<<"-"<<c<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((b<e)&&(e<c)&&(c<d)&&(d<a))
            {
            cout <<b<<"-"<<e<<"-"<<c<<"-"<<d<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((e<c)&&(c<d)&&(d<a)&&(a<b))
            {
            cout <<e<<"-"<<c<<"-"<<d<<"-"<<a<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((c<d)&&(d<a)&&(a<b)&&(b<e))
            {
            cout <<c<<"-"<<d<<"-"<<a<<"-"<<b<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((d<a)&&(a<b)&&(b<e)&&(e<c))
            {
            cout <<d<<"-"<<a<<"-"<<b<<"-"<<e<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((a<b)&&(b<e)&&(e<c)&&(c<d))
            {
            cout <<a<<"-"<<b<<"-"<<e<<"-"<<c<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((b<e)&&(e<c)&&(c<d)&&(d<a))
            {
            cout <<b<<"-"<<e<<"-"<<c<<"-"<<d<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((e<c)&&(c<d)&&(d<a)&&(a<b))
            {
            cout <<e<<"-"<<c<<"-"<<d<<"-"<<a<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((c<d)&&(d<a)&&(a<b)&&(b<e))
            {
            cout <<c<<"-"<<d<<"-"<<a<<"-"<<b<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((d<a)&&(a<b)&&(b<e)&&(e<c))
            {
            cout <<d<<"-"<<a<<"-"<<b<<"-"<<e<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<c)&&(c<b)&&(b<d)&&(d<e))
            {
            cout <<a<<"-"<<c<<"-"<<b<<"-"<<d<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((c<b)&&(b<d)&&(d<e)&&(e<a))
            {
            cout <<c<<"-"<<b<<"-"<<d<<"-"<<e<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((b<d)&&(d<e)&&(e<a)&&(a<c))
            {
            cout <<b<<"-"<<d<<"-"<<e<<"-"<<a<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((d<e)&&(e<a)&&(a<b)&&(b<c))
            {
            cout <<d<<"-"<<e<<"-"<<a<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((e<a)&&(a<c)&&(c<b)&&(b<d))
            {
            cout <<e<<"-"<<a<<"-"<<c<<"-"<<b<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<c)&&(c<d)&&(d<b)&&(b<e))
            {
            cout <<a<<"-"<<c<<"-"<<d<<"-"<<b<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((c<d)&&(d<b)&&(b<e)&&(e<a))
            {
            cout <<c<<"-"<<d<<"-"<<b<<"-"<<e<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((d<b)&&(b<e)&&(e<a)&&(a<c))
            {
            cout <<d<<"-"<<b<<"-"<<e<<"-"<<a<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((b<e)&&(e<a)&&(a<c)&&(c<d))
            {
            cout <<b<<"-"<<e<<"-"<<a<<"-"<<c<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
             else if ((e<a)&&(a<c)&&(c<b)&&(b<d))
            {
            cout <<e<<"-"<<a<<"-"<<c<<"-"<<b<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<c)&&(c<e)&&(e<b)&&(b<d))
            {
            cout <<a<<"-"<<c<<"-"<<e<<"-"<<b<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
             else if ((c<e)&&(e<b)&&(b<d)&&(d<a))
            {
            cout <<c<<"-"<<e<<"-"<<b<<"-"<<d<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((e<b)&&(b<d)&&(d<a)&&(a<c))
            {
            cout <<e<<"-"<<b<<"-"<<d<<"-"<<a<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((b<d)&&(d<a)&&(a<c)&&(c<e))
            {
            cout <<b<<"-"<<d<<"-"<<a<<"-"<<c<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((d<a)&&(a<c)&&(c<e)&&(e<b))
            {
            cout <<d<<"-"<<a<<"-"<<c<<"-"<<e<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << d<< endl;
            }
         else if ((a<d)&&(d<b)&&(b<c)&&(c<e))
            {
            cout <<a<<"-"<<d<<"-"<<b<<"-"<<c<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((d<b)&&(b<c)&&(c<e)&&(e<a))
            {
            cout <<d<<"-"<<b<<"-"<<c<<"-"<<e<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
         else if ((b<c)&&(c<e)&&(e<a)&&(a<d))
            {
            cout <<b<<"-"<<c<<"-"<<e<<"-"<<a<<"-"<<d<< endl;
            cout << "Bilangan terbesar : " << d << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((c<e)&&(e<a)&&(a<d)&&(d<b))
            {
            cout <<c<<"-"<<e<<"-"<<a<<"-"<<d<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((e<a)&&(a<d)&&(d<b)&&(b<c))
            {
            cout <<e<<"-"<<a<<"-"<<d<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((a<d)&&(d<b)&&(b<c)&&(c<e))
            {
            cout <<a<<"-"<<d<<"-"<<b<<"-"<<c<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << a << endl;
            }
         else if ((e<b)&&(b<c)&&(c<d)&&(d<a))
            {
            cout <<e<<"-"<<b<<"-"<<c<<"-"<<d<<"-"<<a<< endl;
            cout << "Bilangan terbesar : " << a << endl;
            cout << "Bilangan terkecil : " << e << endl;
            }
         else if ((b<c)&&(c<d)&&(d<a)&&(a<e))
            {
            cout <<b<<"-"<<c<<"-"<<d<<"-"<<a<<"-"<<e<< endl;
            cout << "Bilangan terbesar : " << e << endl;
            cout << "Bilangan terkecil : " << b << endl;
            }
         else if ((c<d)&&(d<a)&&(a<e)&&(e<b))
            {
            cout <<c<<"-"<<d<<"-"<<a<<"-"<<e<<"-"<<b<< endl;
            cout << "Bilangan terbesar : " << b << endl;
            cout << "Bilangan terkecil : " << c << endl;
            }
         else if ((d<a)&&(a<e)&&(e<b)&&(b<c))
            {
            cout <<d<<"-"<<a<<"-"<<e<<"-"<<b<<"-"<<c<< endl;
            cout << "Bilangan terbesar : " << c << endl;
            cout << "Bilangan terkecil : " << d << endl;
            }
        cout << "__________________" << endl;
        cout << "ULANGI? (YA/TIDAK)" << endl;
        cin >> ulang;
    }
    while (ulang=="YA");
}
