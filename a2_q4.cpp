#include<iostream>
using namespace std;

int main(){
    int n,i,j,space;
    cout<<"enter no. of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        for(space=0;space<i-1;space++){
            cout<<" ";

        }
        for(j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
