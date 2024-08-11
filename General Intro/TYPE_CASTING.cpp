#include <iostream>
using namespace std;

int main() {
    int a;
    char c;

    a=100;
    c = a;
    cout << c << endl;
    // isse jo output aaya vo a ki corresponding ASCII value hh

    c='y';
    a = c;
    cout << a <<endl;
    // isse jo output aaya vo c(y) ki corresponding numeric value hh

    int i = 10;
    char j = 'b';

    int t = i + j;
    char d = i + j;

    cout<< t <<endl;
    // iska output hh vo numeric hoga
    cout<< d << endl;
    // iska output hh vo character hoga
}