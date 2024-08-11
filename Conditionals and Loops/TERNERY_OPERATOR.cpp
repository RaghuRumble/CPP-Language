#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number" <<endl;
    cin>>n;

    if (n % 2 == 0){
        cout<< "Even number" <<endl;
    } else {
        cout<< "Odd number" <<endl;
    }

    (n % 2 == 0)? cout<< "even" <<endl : cout<< "odd" <<endl;


    bool isEven;

    if (n % 2 == 0){
        isEven = true;
    } else{
        isEven = false;
    }
    isEven = (num % 2== 0)? true : false ;
}