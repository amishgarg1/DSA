#include <iostream>
using namespace std;

int main(){
    int i,n;
    
    cout<<"Enter the element"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<(i+1)<< " ";
        }
    cout<<endl;
    }
    return 0;
}