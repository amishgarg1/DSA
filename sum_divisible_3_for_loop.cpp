#include <iostream>
using namespace std;

int main(){
    int i,n;
    int sum=0;
    n=10;
    for(i=1; i<=n; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"The sum of number is "<<sum<<endl;
    return 0;
}