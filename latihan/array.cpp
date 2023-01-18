//judul:
#include <iostream>
using namespace std;

//kamus:

//diskripsi
int main ()
{
    int nilai[12] = {17, 18, 17, 34, 46, 22, 17, 18, 35, 34, 17, 18};
    int temp;
    int a = 0;
    while(a < 12)
    {
        cout << nilai[a] << " ";
        a++;
    }
    cout << endl;
    cout << endl;

    a = 1;
    while (a < 13)
    {
        int b = 0;
        while (b < 13)
        {
            if (nilai[b] > nilai [b+1])
            {
                temp = nilai [b];
                nilai[b] = nilai [b+1];
                nilai [b+1] = temp;
            }
            b++;
        }
        a++;
    }
    cout  << "Hasil sorting : " << endl;
    int x = 0;
    while (x < 13)
    {
        cout << nilai[x] << " ";
        x++;
    }
    cout << endl;
}
