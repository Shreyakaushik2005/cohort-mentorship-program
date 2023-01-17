#include<iostream>
using namespace std;


int main(){
    int mark;
    cout<<"Enter  the marks:"<<endl;
    cin>>mark;
    if(mark<=100 && mark>90){
       cout<<"excellent";
    }
    if(mark<=90 && mark>80){
       cout<<"good";
    }
if(mark<=80 && mark>70){
       cout<<"fair";
    }
if(mark<=70 && mark>60){
       cout<<"meets expectation";
    }
  if(mark<=60 ){
       cout<<"below par";
    }

}
