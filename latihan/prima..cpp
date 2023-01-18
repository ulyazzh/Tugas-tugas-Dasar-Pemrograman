#include <iostream>
using namespace std;
int main()
{
  cout << "Deteksi Angka Prima" << endl;
  cout << "===================" << endl;
  cout << endl;
  int n,i;
  bool prima = true;
  cout << "Input satu angka bulat: ";
  cin >> n;
  if (n == 0 || n == 1) {
    prima = false;
  }
  else {
    for (i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        prima = false;
        break;
      }
    }
  }
  cout << endl;
  if (prima)
    cout << n << " adalah angka prima";
  else
    cout << n << " bukan angka prima";

 cout << endl;
 return 0;
}
