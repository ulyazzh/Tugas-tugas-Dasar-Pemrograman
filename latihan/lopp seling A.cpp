#include <iostream>
using namespace std;

int i, j;

int main()
{
    i=1;
    while (i<9)
    {
        j=1;
        while (j<9)
        {
            if (i==j)
            {
                cout << "* ";
            }
            else
            {
                cout << j << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}
