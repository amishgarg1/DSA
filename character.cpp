#include <iostream>
using namespace std;

int main(){
    char ch,A,Z,a,z;
    cout<<"Enter the character "<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"This is lower case character"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"This is upper case character"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;

    }
    
    return 0;
}