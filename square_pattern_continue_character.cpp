#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    char ch = 0;
    ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch= ch+1;
        }
        cout<<endl;
    }
    return 0;
}