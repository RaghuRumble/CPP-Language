#include <iostream>
using namespace std;
int main(){

    int a ;
    cout<< "Enter the number" <<endl;
    cin>> a;

    switch (a){

        case 6: 
           cout<< "Saturday" <<endl;
           break;
// har case likhne ke baad break; likhna zaruri hh
        case 7:
           cout<< "Sunday" <<endl;
           break;

         default :
             cout<< "Weekday" <<endl;   
           
    }

}