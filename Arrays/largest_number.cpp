#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[10];
    for(int i=0; i<n; i++){
        cin>>input[i];
    }

    int max= INT_MIN;
    // int min isliye kiya taaki ekdum least value miljaye integer me
    for(int i=0; i<n; i++){
        if(input[i]>max){
            max= input[i];
        }
    }
    cout<<"Largest number is " <<max <<endl;
}