//judul : ascending (nilai sudah dtentukan)

#include <iostream>
using namespace std;

int main()
{
    int nilai[] = {17, 18, 17, 34, 46, 22, 17, 18, 35, 34, 17, 18};
    int lenght = sizeof(nilai)/sizeof(*nilai);
    int temp;
    int a = 1;
    while(a < lenght)
    {
        int b = 0;
        while( b < lenght-a)
        {
           if(nilai[b] > nilai [b+1])
           {
               temp = nilai [b];
               nilai[b] = nilai[b+1];
               nilai [b+1] = temp;
           }
           b++;
        }
        a++;

    }
    cout << "hasil sorting : " << endl;
    int x = 0;
    while (x < lenght)
    {
        cout << "" << nilai[x] << "  ";
        x++;
    }
}
