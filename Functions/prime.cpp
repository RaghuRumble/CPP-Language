#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int d=2; d<n; d++){
        if(n%d==0){
            return false;
        }
    }
    return true;
}
int main(){
    bool ans= isPrime(456777);
    cout<<ans<<endl;

    ans= isPrime(785);
    cout<<ans<<endl;
}