#include<iostream>
using namespace std;

int main(){
    int c, i,j,n;
    cout<<"enter no rows";
    cin>>n;
     int a=0;
     int b=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
         cout<<" "<<a;
         c=a+b;
         a=b;
         b=c;
         
        }
        cout<<endl;
    }
}
