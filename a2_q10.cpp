#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"enter no. of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==0){
                if(i==j||j==n-i+1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j==i+2||j==i-2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
