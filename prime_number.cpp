#include <iostream>
using namespace std;

int main(){
    int i,n;
    bool isPrime = true;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=2; i*i<=n; i++){
        if(n%i != 0){
            isPrime=false;
            break;
        }
    }
    if (isPrime==true){
        cout<<"Number is prime"<<endl;
        
    }
        else{
            cout<<"Number is non prime"<<endl;
        }
    return 0;
}