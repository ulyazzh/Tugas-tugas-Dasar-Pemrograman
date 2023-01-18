#include <iostream>
using namespace std;

int jml, i, a;

int main ()
{
    cout << "masukkan jumlah bintang: ";
    cin >> jml;
    int i = 1;
    while(i <= jml)
    {
        int a = 1;
        while (a <= i)
        {
            cout << "*" << " ";
            a++;
        }
        cout << endl;
        i++;
    }
}
