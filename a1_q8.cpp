#include<iostream>
using namespace std;
#include<math.h>


int main(){
    int count=0,multiplier,divider,n,r,k,result,q;
    cout<<"enter no. and no. of rotation";
    cin>>n ;
    cin>>k  ;
    int num=n;
    while(num!=0){
        count++;
        num=num/10;
    }
    cout<<count<<endl;
    int nod=count;
    divider=pow(10,k);
    multiplier=pow(10,nod-k);
   
    if(k<0){
        k=nod+k;
    }
      r=n%divider;
        q=n/divider;
        result=(r*multiplier)+q;
       cout<<result<<endl; 
        return 0;

    

}
