#include <iostream>
using namespace std;

int main() {

   int a = 10;
   int b = 15;
   int c = a + b;
// int use krte hh integer storage ke liye

    cout << c << endl;
    // storage bnne ke baad "" inki zarurat nhi print krne me

   char d = 'x';
//    char use hota hh character storage ke liye 
   cout<< d << endl;

   float f = 1.23;
// float use hota hh decimal ke liye
   cout<< f <<endl;

   bool b1 = false;
//    bool is used for true false only
    cout<< b1 <<endl;

   int size = sizeof(f);
// ye use hota hh storage size ke liye 
   cout<< size <<endl;

}
