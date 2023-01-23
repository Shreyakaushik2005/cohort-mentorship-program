 #include<iostream>
 using namespace std;

 int main(){
    int i,j,k,n,space;
    
    cout<<"enter no. of rows";
    cin>>n;
    int star=1;
     space=n/2;
   for(i=1;i<=n;i++){
    for(j=1;j<=space;j++){
        if(i==n/2+1){
            cout<<"*\t";
        }
        else{
            cout<<"\t";
        }
        
    }
    for(k=1;k<=star;k++){
        cout<<"*\t";
    }
    cout<<endl;
    if(i<=n/2){
        star++;
        
    }
    else{
        star--;
    }
   }
 }
