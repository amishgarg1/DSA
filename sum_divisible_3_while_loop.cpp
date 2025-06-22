#include <iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    n=10;
    int sum=0;
    while(i<=n){
        if(i%3==0){
            sum+=i;
        }
        i++;
    }
    cout<<sum;
    return 0;
}