#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int x,i;
    cout<<"enter a number";
    cin>>x;
    for(i=2;i*i<=x;i++){
      while(x%i==0){
        x=x/i;
        cout<<i<<endl;
      }
    }
    if(x!=1){
        cout<<x<<endl;
    }
    return 0;
}
