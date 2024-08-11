#include <iostream>
using namespace std;
int main() {
  /*  int n;
    cin>> n;

    int sum = 0;

    while(n != 0) {
        sum = sum + n;
        cin>> n;
            cout<< sum <<endl;

    }  */


    int n;
    int sum = 0;

    do {
        cin>> n;
        sum = sum + n;

    } while (n != 0);
    cout << sum <<endl;
}