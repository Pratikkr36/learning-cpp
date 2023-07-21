#include<iostream>
using namespace std;

// void print1(int n){
//     for(int i=0; i<n; i++){
//         int a = i;
//         for (int j=0; j<=i; j++){
//             cout<<char(64+n-a)<<" ";
//             a--; 
//         }
//         cout<<endl;
//     }
// }

void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(65+n-j-1)<<" ";
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