#include <iostream>
using namespace std;

int i, j;

int main()
{
   i=1;
   while (i<11)
   {
       j=1;
       while (j<=i)
       {
           cout << j << " ";
           j++;
       }
       cout << endl;
       i++;
   }
}
