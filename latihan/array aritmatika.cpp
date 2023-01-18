#include <iostream>
using namespace std;

int main()
{
    int harga[] = {5600, 1200, 3000, 2400};
    int jml_arr = sizeof(harga)/sizeof(*harga);

    int total;

    int a = 0;
    while (a < jml_arr)
    {
        total += harga[a];
        a++;
    }
    cout << "total harga = Rp. " << total << endl;
}
