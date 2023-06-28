#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void printname(string name){
    cout<<"Hey "<< name <<endl;
}

int maxx(int a1, int b1){
    if(a1>=b1) return a1;
    else return b1;
}

int main(){
    string name;
    cout<<"enter your name: ";
    cin>>name;
    printname(name);

    int a; int b;
    cout<<"enter any two numbers for comparision: ";
    cin>>a>>b;
    int maximum = maxx(a,b);
    cout<<maximum<<endl;
    //cout<<max(3,4)<<endl;
    return 0;
}