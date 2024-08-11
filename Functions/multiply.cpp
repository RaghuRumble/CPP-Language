#include<iostream>
using namespace std;

int multiply(int a, int b){
    return a*b;
}
int main(){
    int ans= multiply(234, 456);
    cout<<ans <<endl;
    ans = multiply(3, 4);
    cout<<ans <<endl;
}
