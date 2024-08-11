#include <iostream>
using namespace std;
int main() {
    int n = 11;
    int R;

   /* if (n % 3 == 0){
        R = 0;
    } else if (n % 3 ==1){
        R = 1;
    } else{
        R = 2;
    } */


    R = (n % 3 == 0)? 0: (n % 3 == 1)? 1: 2;
    cout <<R <<endl;
}