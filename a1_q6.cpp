#include<iostream>
using namespace std;

int main(){
    int sum=0, r,x;
    cout<<"enter a no.";
    cin>>x;
    while(x>0){
      r=x%10;
      sum=sum*10+r;
      x=x/10;
    }
    cout<<"reverse order is"<<sum<<endl;
    return 0;

}
