#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
        cout<<ch;
        cout<<" ";
        ch= ch + 1;
    }
    cout<<endl;
}
    return 0;
}