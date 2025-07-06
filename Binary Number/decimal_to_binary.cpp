#include <iostream>

using namespace std;

int main(){
    int power=1;
    int n;
    int decimalNumber;
    int answer=0;
    int remainder;
    cout<<"Enter the decimal number"<<endl;
    cin>>decimalNumber;
    while(decimalNumber>0){
        remainder= decimalNumber % 2;
        decimalNumber = decimalNumber/2;
        answer   = answer + (remainder * power);
        power = power * 10;  
    }
    cout << "Binary representation: " << answer << endl;
    return 0;
}