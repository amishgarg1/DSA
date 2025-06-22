#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"He is eligible for voting"<<endl;
    }
    else {
        cout<<"He is not eligible for voting"<<endl;
    }


    return 0;
}