//judul

#include <iostream>
using namespace std;

main()
{
    int nilai[]={7, 3, 5, 10, 8};
    int lenght = sizeof(nilai)/sizeof(*nilai);
    int temp;
    for(int a = 1; a < lenght; a++)
    {
        for(int b = 0; b < lenght-a; b++)
        {
            if(nilai[b]>nilai[b+1])
            {
                temp = nilai [b];
                nilai[b] = nilai [b+1];
                nilai [b+1] = temp;
            }
            for(int c = 0; c <lenght; c++)
            {
               cout <<nilai [c]<<" | ";
            }
            cout <<endl;
        }
    }
    cout <<"hasil sortingnya adalah" << endl;
    for (int x =0; x <lenght; x++)
    {
        cout << ""<<nilai[x]<<endl;
    }


}

