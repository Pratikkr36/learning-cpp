#include<iostream>
#include<string>
using namespace std;

void something(int num){
    cout<<num<<endl;
    num=num+5;
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;

}

void editname(string &name){//& is used for pass by reference...
    name[0]='t';
    cout<<name<<endl;
}

int main(){
    int num;
    cin>>num;
    something(num);
    cout<<num<<endl;

    string name;
    cin>>name;
    editname(name);
    cout<<name;

    return 0;
}