#include <iostream>
using namespace std;

int main() {
    int f;
    cout<< "enter the farenheit value";
    cin>> f;

    int c = (5.0/9) * (f-32);
    // 5.0 ki jagah 5 lete to 5/9= 0 aajata since int/int = int 
    cout<< c << endl;

    cout<< 10%3 <<endl;
}
