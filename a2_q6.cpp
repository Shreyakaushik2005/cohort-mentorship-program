#include<iostream>
using namespace std;

int main(){
    int n,space_1,space_2 ,i,j,k;
    cout<<"enter no. of rows";
    cin>>n;
    for(i=1;i<n;i++){
        for(j=i;j<=n;j++){
           cout<<"*";
        }
        for(space_1=n;space_1>=n-i+1;space_1--){
            cout<<"  ";
        }
        
        for(k=i;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           cout<<"*";
        }
        for(space_1=i;space_1<=n;space_1++){
            cout<<"  ";
        }
        
        for(k=n;k>=n-i+1;k--){
            cout<<"*";
        }
        cout<<endl;
        
    }
}
