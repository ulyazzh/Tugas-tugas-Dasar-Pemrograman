#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Persegi Bintang  ##" << endl;
  cout << "===================================" << endl;
  cout << endl;

  int besar_persegi,i,j;

  cout << "Input besar persegi: ";
  cin >> besar_persegi;

  cout << endl;

  i = 1;
  while (i <= 9)
  {
      j = 1;
      while (j <= 9)
      {
          cout << " *";
      }
      j++;
      cout << endl;
  }
  i++;

  return 0;
}
