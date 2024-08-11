#include<iostream>
using namespace std;

void printArray(int print[], int m){
    cout<<"Reverse: ";
    for(int i=0; i<m; i++){
        cout<<print[i] <<" ";
    }
    cout<<endl;
}

void reverse(int input[], int n){
    int i=0;
    int j=n-1;
    for(; i<j; i++, j--){
        int temp= input[i];
        input[i]=input[j];
        input[j]=temp;
    }
}

int main(){
    int a=10;
    int b[10]={1,2,3,4,5};
    reverse(b, 5);
    printArray(b, 5);

}