int main(){
    int n,i,j,k,space;
    cout<<"enter no.of rows";
    cin>>n;
    for(i=1;i<n;i++){
        for(space=i;space<=n;space++){
            cout<<" ";
        }
        for(j=1;j<i;j++){
            cout<<"*";
        }
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(space=1;space<=i;space++){
            cout<<" ";
        }
        for(j=i;j<n;j++){
            cout<<"*";
        }
        for(k=i;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}
