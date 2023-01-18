#include<iostream>
using namespace std;
int tinggi,i,j,k;
int main()
{
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    cout << endl;
    i=1;
    while (i<=tinggi) {
        j=1;
        while(j<=tinggi-i) {
            cout << " ";
            j++;
        }

        k=1;
        while (k<=i){
            cout << " *";
            k++;
        }
        cout << endl;
        i++;
    }
  return 0;
}
