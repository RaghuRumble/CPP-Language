#include<iostream>
using namespace std;
#include<cstring>

int main(){
   /* char input[100];
    cin>> input;

    int length= strlen(input);
    cout<<"length of string: " <<length <<endl;
    */

   char input1[100]="abcd";
   char input2[100]="def";

   cout<<"Before copying: " <<endl;
   cout<<"Input1: " <<input1 <<endl;
   cout<<"Input2: " <<input2 <<endl;

//    strcpy(input1,input2);

   strncpy(input1,input2,3);
   cout<<"After copying: " <<endl;
   cout<<"Input1: " <<input1 <<endl;
   cout<<"Input2: " <<input2 <<endl;

   strcpy(input1,"hello hello");
   cout<<"After copying: " <<endl;
   cout<<"Input1: " <<input1 <<endl;
   cout<<"Input2: " <<input2 <<endl;


  /* cin>>input1;
   cin>>input2;

   if(strcmp(input1,input2)==0){
    cout<<"true" <<endl;
   }
   else{
    cout<<"false" <<endl;
   }
   */
}