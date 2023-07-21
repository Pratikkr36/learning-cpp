#include<iostream>
using namespace std;

void print(int n){
    
    for(int i=0; i<n; i++){
        int start = 0;
        for (int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for (int j=0; j<2*i+1; j++){
            cout<<char(65+start);
            if(j<i) start++;
            else start--;
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