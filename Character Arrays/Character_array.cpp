#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0; input[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char naam[100];
    cout<<"Enter your name: " <<endl;
    cin >> naam;
    // yaha tk abc hi print hota

    // naam[4] = 'x';
    // yaha tk abc hi print hota

    // naam[3] = 'd';
     // yaha tk abcdx hi print hota

    // naam[1] = '\0';
    // yaha tk a hi print hota 
    

    cout<< "Name: " << naam <<endl;

    cout<< "Length: " <<length(naam) <<endl;
    
}