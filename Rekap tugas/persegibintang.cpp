//judul
#include <iostream>
using namespace std;

//kamus
int pjgpersegi,i,j;

//deskripsi
int main()
{
    cout << "Membuat Persegi Bintang" << endl;
    cout << "=======================" << endl;
    cout << endl;
    cout << "Input besar persegi: ";
    cin >> pjgpersegi;

    cout << endl;

    i=1;
    while(i<=pjgpersegi) {
        j=1;
        while(j<=pjgpersegi){
        cout << " *";
        j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
