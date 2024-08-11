#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[100];

    for(int i=0; i<n; i++){
        cin>> input[i];
    }

    // array ko print kara diya
    for(int i=0; i<n; i++){
        cout<< input[i] <<endl;
    }
}