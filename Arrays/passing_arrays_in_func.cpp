#include<iostream>
using namespace std;

void printArray(int input[], int n){
    cout<<"Print : ";
    for(int i=0; i<n; i++){
        cout<< input[i] <<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int input[100];

    cout<<"Enter the array elements : ";
    for(int i=0; i<n; i++){
        cin>> input[i];
    }
    printArray(input, n);
}