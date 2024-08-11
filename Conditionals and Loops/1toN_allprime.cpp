#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int d;
        bool isprime = true;

    int i = 2;
    while (i <= n){

         d = 2;
        while (d < i){
            if (i % d == 0){
                isprime = false;
                break;
            }
            d = d + 1;
        }
         cout<< i << isprime <<endl;
         i = i + 1;

    }
}