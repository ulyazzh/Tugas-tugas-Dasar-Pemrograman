#include <iostream>
using namespace std;

int main()
{
    int A[5] = {3, 4, 1, 2, 4};
    int B[5] = {8, 7, 2, 2, 5 };
    int hasil;
    int i = 0;
    while(i < 5)
    {
        hasil=A[i] + B[i];
        i++;
        cout << hasil << " ";
    }

    return 0;
}
