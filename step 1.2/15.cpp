#include<iostream>
using namespace std;

void print(int n){
    for(int i = n; i>=1; i--){
        for (int j = 1; j<=i; j++){
            cout<<char(64+j);
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