#include<iostream>
using namespace std;

int increment(int a){
    a=a+1;
    return a;
}
int main(){
    int a=10;
    increment(a);
    cout<<a <<endl;
    // yaha a ki value 10 hi print hogi kyuki updated value ka humne use nhi kiya

    a= increment(a);
    cout<<a <<endl;
    // yaha a ki value 11 print hogi kyuki update krdi hh function ke sath 
}