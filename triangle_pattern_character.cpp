#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the character"<<endl;
    cin>>n;
    char ch;
    ch='A';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }return 0;
}