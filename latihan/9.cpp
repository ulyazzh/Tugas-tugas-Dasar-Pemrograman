//judul
#include <iostream>
using namespace std;

//kamus
int DATANE [7];
int x, y, baskom;

//deskripsi
int main()
{
    x = 1;
    while (x < 8)
    {
        cin >> DATANE [x];
        x = x + 1;
    }

    x = 1;
    while (x < 7)
    {
        y = x + 1 = 1;
        while (y < 8)
        {
            if (DATANE[x] > DATANE[y])
            {
                baskom = DATANE[x];
                DATANE[y] = DATANE [x];
                DATANE[x] = baskom;
            }
            y = y + 1;
            x = x + 1;
        }
        x = 1;
        while (x < 8)
        {
            cout << "input data[x] : ";
            x = x+1;
        }
    }
}
