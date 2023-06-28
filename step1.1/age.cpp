#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"enter your age: ";
    cin>>age;

    if(age>=18){
        cout<<"an adult of age "<<age<<endl;
    }
    else{
        cout<<"not an adult!"<<endl;
    }

    return 0;
}