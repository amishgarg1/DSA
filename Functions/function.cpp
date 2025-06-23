#include <iostream>
using namespace std;
int sum(int a, int b ){
   int  s= a+b;
    return s;
}
    int min( int a , int b){
       int m=a-b;
       return m;
    }
int minOftwo (int a, int b){
       if(a<b){
        return a;
}
    else{
        return b;
}
}
int main(){
    cout<< sum(10,11)<<endl;
    cout<<min(10,8)<<endl;
    cout<<"Minimum is" <<minOftwo(8,8)<<endl;
        return 0;
}