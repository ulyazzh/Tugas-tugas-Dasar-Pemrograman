#include <iostream>
#include <string.h>
using namespace std;

//void bilangan ()

main()
{
    int i, n, maxNilai, c;
    cout <<"Program Mengurutkan Bilangan";
    cin >> n;

    int a(n);
    for (i=0; i<n; i++)
    {
        cout << "Bilangan ke-" << i+1 << ": "; cin >> a(i);
    }

    for (i=1; 1<n; i++)
    {
        for(c=0; c<n-i; c++)
        {
            if (a[c]>a[c+1])
            {
                maxNilai=a[c];
                a[c]=a[c+1];
                a[c+1]=maxNilai;
            }
        }
    }
    cout <<"Hasil pengurutan adalah";
    or (int i=0; i<n; i++)
    {
        cout << "" << a [i];
    }
    {
        cout << endl;
    }







    /*if ((a<b)&&(b<c)&&(c<d)&&(d<e))
    {
        cout << a << "-" << b << "-" << c << "-" << d << "-" << e << endl;
    }

    else if ((b<c)&&(c<d)&&(d<e)&&(e<a))
    {
        cout << b << "-" << c << "-" << d << "-" << e << "-" << a << endl;
    }
}
*/
