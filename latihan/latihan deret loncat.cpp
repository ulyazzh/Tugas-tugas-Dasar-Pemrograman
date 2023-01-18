//judul:
#include <iostream>
using namespace std;

//kamus:
int i, n, m, j;

//deskripsi:
int main()
{
    i=0;
    n=3;
    m=18;
    j=n+3;

    while (j<=m)
    {
        cout << j << " ";
        i=i+j;
        j++;
    }
    cout << "hasil : " << j;
}
