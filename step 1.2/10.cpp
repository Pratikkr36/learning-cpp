#include<iostream>
using namespace std;

void print(int n){
   for(int i = 1; i<=n; i++){
        for (int j = 0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    for(int i = 1; i<n; i++){
        for (int j = 0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    print(5);
    return 0; 
}