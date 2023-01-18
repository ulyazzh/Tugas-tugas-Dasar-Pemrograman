//Judul=sorting
#include <iostream>
using namespace std;
//kamus
int x,y,baskom;
int datane[4];

main(){
  x=1;
  while(x<5)
    {
    cout << "data ke- " << x << " : ";
    cin>>datane[x];
    x=x+1;
    }
  x=1;
  while(x<5){
    y=x+1;
    while(y<5){
        if(datane[x]>datane[y]){
           baskom=datane[y];
           datane[y]=datane[x];
           datane[x]=baskom;
        }
        y=y+1;
    }
    x=x+1;
  }
  x=1;
  cout  << "Hasil setelah diurutkan : ";
  while(x < 5)
		{
			cout<< datane[x] <<" " ;
			x=x+1;
		}


}
