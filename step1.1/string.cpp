#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "pratik";
    int len = s.size();
    cout<<"it is: "<< s[len-1]<<endl;
    s[len-1]= 'j';
    cout<<"it is: "<< s[len-1];
    return 0;
}