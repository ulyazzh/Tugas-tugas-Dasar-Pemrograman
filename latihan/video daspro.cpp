#include <iostream>
using namespace std;

int nilai;

int main()
{
    cout << "masukkan nilai : " ;
    cin >> nilai;

    if (nilai >= 90 && nilai <=100)
	{
		cout << "Huruf : A";
	}
	else if (nilai >= 70 && nilai <= 89)
	{
		cout << "Huruf : B";
	}
	else if (nilai >= 0 && nilai<=69)
	{
		cout << "Huruf : C";
	}
	else
	{
		cout << "rentang nilai harus dari 0 sampai 100";
	}
}
