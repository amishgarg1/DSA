#include <iostream>
using namespace std;

int main(){
    int n;
    char ch;
    cout<<"Enter the number"<<endl;
    cin>>n;
    ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        for(int j=0; j<n-i; j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}