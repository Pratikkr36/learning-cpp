#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[5];
    for (i=0; i<=4; i++){
        //cout<<i<<endl;
        cin>>arr[i];
    }
    for (i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}