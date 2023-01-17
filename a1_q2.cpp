#include<iostream>
using namespace std;


int main(){
    int mark;
    cout<<"Enter  the marks:"<<endl;
    cin>>mark;
    if(mark<=100 && mark>90){
       cout<<"excellent";
    }
    else if(mark<=90 && mark>80){
       cout<<"good";
    }
   else if(mark<=80 && mark>70){
       cout<<"fair";
    }
   else if(mark<=70 && mark>60){
       cout<<"meets expectation";
    }
    else(mark<=60 ){
       cout<<"below par";
    }
    return 0;

}
