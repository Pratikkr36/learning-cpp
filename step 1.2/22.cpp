#include<iostream>
#include<math.h>
using namespace std;

void print(int n){
    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            cout<<n-min(min(i, 2*n-i), min(j, 2*n-j))+1<<" ";
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