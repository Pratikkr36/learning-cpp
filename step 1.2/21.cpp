#include<iostream>
using namespace std;

void print(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==1 || j==n || i==1 || i==n) cout<<"*";
            else cout<<" ";
            }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    print(n);
    return 0;
}