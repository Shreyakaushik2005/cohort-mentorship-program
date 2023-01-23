#include<iostream>
using namespace std;

int main(){
    int k,i,j,space_1,n;
    cout<<"enter no. of rows";
    cin>>n;
    int star=n;
     space_1=0;
     
    for(i=1;i<=n;i++){
        for(j=1;j<=space_1;j++){
            cout<<"\t";
        }
        for(k=1;k<=star;k++){
            if(i>1 && i<(n/2)+1 && k>1 && k<star){
                cout<<"\t";
            }
            else{
            cout<<"*\t";
        }
        }
         
        
        cout<<endl;
        if(i<=n/2){
            star=star-2;
             ;
            space_1=space_1+1;
        }
        else{
            star=star+2;
            space_1=space_1-1;
            
        }
    }
}
