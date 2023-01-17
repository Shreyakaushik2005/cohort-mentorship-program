#include<iostream>
using namespace std;

int main(){
    int r, count=0,x;
    cout<<"enter a number";
    cin>>x;
    while(x>0){
     r=x%10;
     count++;
     x=x/10;

    }
    cout<<"this no. has"<<count<<"digits"<<endl;
    return 0;
}
