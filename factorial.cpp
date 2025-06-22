#include <iostream>
using namespace std;

int main(){
    int i,n;
    n=3;
    int factorial=1;
    for(i=1; i<=n; i++){
        factorial*=i;
    }
    cout<<factorial;
    return 0;
}