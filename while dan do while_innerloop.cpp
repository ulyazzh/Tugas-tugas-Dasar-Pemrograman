/*
judul: Loop dalam Loop
oleh: uly atmi azizah
4 oktober 2022
di kosan
*/

#include <iostream>
using namespace std;

//kamus
int angkaloncat;
int loncatangka;


//diskripsi
main()
{
    angkaloncat=10;
    while (angkaloncat>=6)
    {
        //----innerloop----
        loncatangka=1;
        do
        {
            cout << loncatangka;
            cout <<"-";
            loncatangka=loncatangka+1;
        }
        while(loncatangka<10);
        //------

        angkaloncat=angkaloncat-1;
        cout<<endl;
    }
}
