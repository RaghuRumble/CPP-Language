// a==b equal to 
// a!=b not equal to 
// a>b a>=b
// a<b a<=b 
// && ye AND gate ki tarah kaam krta hh (dono true honge tabhi 1 aayega) 
// || ye OR gate ki tarah kaam krta hh  
// ! NOT gate ki tarah kaam krta hh 

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the values of a and b" <<endl;
    cin>> a >>b;

    bool isEqual = a==b;
    bool isAgreater = a>b;
    bool isAsmaller = a<b;

    cout<< "Are they equal " << isEqual <<endl;
    cout<< "Is A greater than B " << isAgreater <<endl;
    cout<< "Is A smaller than B " << isAsmaller <<endl;

    bool third = isEqual && isAgreater;
    bool fourth = isEqual || isAgreater;

    cout<< third <<endl;
    cout<< fourth <<endl;

    cout<< "Not Equal " << !isEqual <<endl;


}