#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number "<<endl;
    cin>>n;
    char ch;
    for(int i=0; i<n; i++){
        ch='A'+i;
        for(int j=0; j<i+1; j++){
            cout<<ch--<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}