#include <iostream>
using namespace std;

int main()
{
    int jml_index;
    cout << "masukkan jumlah data usia : ";
    cin >> jml_index;

    float nilai[jml_index];
    float total, ratarata;
    int a = 0;
    while (a < jml_index)
    {
        cout << "data usia ke- " << a << " = ";
        cin >> nilai [a];
        total +=nilai[a];
        a++;
    }
    cout << "========================" << endl;
    cout << "rata rata = jumlah usia/index usia " << endl;
    cout << "rata rata = " << total << "/" << jml_index << endl;
    ratarata = total/jml_index;
    cout << "rata rata = " << ratarata << endl;
    cout << "========================" << endl;
}
