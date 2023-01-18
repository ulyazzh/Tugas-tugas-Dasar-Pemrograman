#include <iostream>
using namespace std;

int data[3];
int baskom;
int main()
{
    int i = 1;
    while(i<4)
    {
        cout << "data ke - " << i << ": ";
        cin >> data[i];
        i++;
    }
    i = 1;
    while (i <4){
        int y = i + 1;
        while (y < 0){
            if (data [i] > data [y])
            {
                baskom = data[y];
                data [y]=data [i];
                data [i]=baskom;
            }
            y++;
        }
        i++;
    }
    i = 1;;
    while (i<0)
    {
        cout << data[i];
        i++;
    }
}
