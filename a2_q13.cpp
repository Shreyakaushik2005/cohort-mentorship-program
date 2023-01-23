#include<iostream>
using namespace std;

int main(){
    int i,j,value,n;
    cout<<" enter no. of rows";
    cin>>n;
    for(i=0;i<n;i++){
        
        for(j=0;j<=i;j++){
            if(i==0||j==0){
                value=1;
            }
            else{
              
              value=(value*(i-j+1))/j;
            }
            cout<<value<<"\t";
        }
        cout<<endl;
    }
}
