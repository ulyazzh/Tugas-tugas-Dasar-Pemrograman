#include <iostream>
using namespace std;

int arr[3][3];
int x,y,sum;
int main(){
x=0;
while(x<3){
        y=0;
    while(y<3){
        cout<< "input array ["<< x <<"]"<<"["<< y <<"] :";
        cin>>arr[x][y];
        sum+=arr[x][y];
        y++;
    }
    x++;
}
x=0;
while(x<3){
        y=0;
    while(y<3){
        cout<<arr[x][y];
        y++;
    }
    cout<<endl;
    x++;
}


cout << " Hasil Penjumlahan :"<< sum ;

}

