#include<iostream>
using namespace std;

int main(){
   int n = 5;
   int arr[5] = {n};
//    iska mtlb pehla element n hh iske baad baaki 0 hh

   for(int i = 0;i<5;i++){
          if(i == 4)
              break;
          if(i==2)
              continue;
        cout<<arr[i]<<" ";
   }
}