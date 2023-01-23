#include<iostream>
using namespace std;

int  main(){
    int n,i,j;
    cout<<"enter no. of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j||j==n-i+1||i==n-j+1){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }

}
