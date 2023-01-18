//judul
#include <iostream>
using namespace std;

//kamus
int N;
string oh;

//deskripsi
int main()
{
    do
    {
        cout << "Masukkan nilai N : ";
        cin >> N;

        cout << "Ada bilangan lagi? (Y/T) : ";
        cin >> oh;
    }
    while (oh == "Y");

    return 0;
}
