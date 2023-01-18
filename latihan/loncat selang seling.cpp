#include <iostream>
using namespace std;

int i, N, M, J, jumlah;

int main ()
{
    i = 0;
    N = 3;
    M = 18;
    J = 3;
    //b = 16;

    while (N<=M)
    {
        cout << N << " " ; //<< b << " ";
        N=N+J;
       // b=b-2;
        i++;
    }
    N=N+i;
    cout << " = " << N;
}
