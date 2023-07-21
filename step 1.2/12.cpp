#include<iostream>
using namespace std;

void print(int n){
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout<<j;
        }
        for(int j = 0; j<=2*(n-i)-1; j++){
            cout<<" ";
        }
        for (int j = i; j>0; j--){
            cout<<j;
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

