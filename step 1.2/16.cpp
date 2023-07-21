#include<iostream>
using namespace std;

void print(int n){
    for(int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout<<char(64+i);
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