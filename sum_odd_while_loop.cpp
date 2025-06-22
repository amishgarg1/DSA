#include <iostream>
using namespace std;

int main(){
    int n,sum;
    sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        if (i%2 !=0)
        {
            sum+=i;
        }
        i++;
        
    }
    cout<<sum;
    return 0;
}