#include <iostream>
using namespace std;

int main(){
    int A,B,C,D,marks;
    cout<<"Enter the marks"<<endl;
    cin>>marks;
    if (marks>=90){
    cout<<"A";
    }
        else if (marks>=80 && marks<90)
        {
            cout<<"B";
        }
            else if (marks>=70 && marks<80)
            {
                cout<<"C";
            }
            else{
                cout<<"D";
            }
    return 0;
}