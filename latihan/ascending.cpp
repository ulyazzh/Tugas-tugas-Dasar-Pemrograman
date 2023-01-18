//judul

#include <iostream>
using namespace std;

//kamus


//deskripsi
int main()
{
    int angka[5];
    int jml_arr = sizeof (angka)/sizeof(*angka);



    int a = 0;
    while (a < jml_arr)
    {
        cout << "masukkan nilai index ke - " << a << " : ";
        cin >> angka[a];
        a++;
    }
    cout << "==============================" << endl;
    cout << "nilai yg tersimpan " << endl;
    cout << "==============================" << endl;
    int b = 0;
    while (b < jml_arr)
    {
        cout << "index ke - " << b << " : " << angka [b] << endl;
        b++;
    }

}
