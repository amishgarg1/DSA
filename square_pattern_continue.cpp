#include <iostream>
using namespace std;

int main(){
    
    int n,i,j;
    int num = 1;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}