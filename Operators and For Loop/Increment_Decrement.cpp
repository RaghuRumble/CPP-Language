/* a++; post increment operator
   ++a; pre increment operator
   a--; post decrement operator
   --a; pre decrement operator
*/
#include<iostream>
using namespace std;
int main(){
   int a=10;
   cout<<++a <<endl;
   // isme pehle value inc hogi fir print

   cout<<a++ <<endl;
   // isme pehle print hoga fir value inc

   cout<<a-- <<endl;

   cout<<--a <<endl;
}