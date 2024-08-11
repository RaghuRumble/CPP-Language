// isse // single line comment
/* isse (/*)
     multi line 
      comment   */


#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<< "Enter the Numbers" <<endl;
     cin>> a >> b; 

     /* if (a==b) {
        cout << "Hey these are equal" <<endl;
     } else {
        cout<< "Nahhh not equal" <<endl;
     } */

   /*  if (a == b) {
        cout << "Hey these are equal" <<endl;
     } else {
        if (a > b) {
            cout<< "a is greater" <<endl;
        } else {
            cout<< "a is smaller" <<endl;
        }
     } */

// iseee ese bhi likh skte hh
     if (a ==b) {
      cout<< "Hey these are equal" <<endl;
     } else if (a > b) {
      cout<< "a is greater" <<endl;
     } else {
      cout<< "a is smaller" <<endl;
}
}