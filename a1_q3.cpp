#include<iostream>
using namespace std;

int main(){
    int count=0, i,x;
    cout<<"enter a number";
    cin>>x;
    for(i=1;i<=x;i++){
       if(x%i==0){
        count++;
       }
    }
    if(count==2){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}
