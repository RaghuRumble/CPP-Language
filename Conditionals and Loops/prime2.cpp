#include <iostream>
using namespace std;

int main(){
    int num =12;
    bool isprime = true;

    int d = 2;
    while (d < num) {
        if (num % d ==0){
            isprime = false;
             cout<< "Not Prime" <<endl;

            break;
        } d = d + 1;
    } 
    if (isprime) {
        cout<< "Prime" <<endl;
    }

}