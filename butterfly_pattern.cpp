#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*(n-i-1); j++){
            cout<<" ";
        }
        
        for(int j=0; j<=i; j++){
            cout<<"*";
    }
    cout<<endl;
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<n-i; j++){
                    cout<<"*";
                }
                for(int j=0; j<2*i; j++){
                    cout<<" ";
                }
                for(int j=1; j<=n-i; j++){
                cout<<"*";
                }
                cout<<endl;
            }

    return 0;
}