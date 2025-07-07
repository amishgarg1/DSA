#include <iostream>
using namespace std;
int binToDecimal(int binNum){
    int ans=0, power=1;
    while (binNum>0)
    {
        int rem= binNum%10;
        ans += rem*power;
        binNum /=10;
        power*=2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the binary number"<<endl;
    cin>>n;
    cout<<binToDecimal(n)<<endl;
    return 0;
}