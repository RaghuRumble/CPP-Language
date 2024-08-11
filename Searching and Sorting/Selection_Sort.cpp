#include<iostream>
using namespace std;
void selectionSort(int input[], int n){
    for(int i=0; i<n-1; i++){
        int min=input[i], minIndex=i;
        for(int j=i+1; j<n; j++){
            if(input[j]<min){
                min=input[j];
                minIndex=j;
            }
        }
        int temp=input[i];
        input[i]=input[minIndex];
        input[minIndex]=temp;
    }   
}
int main(){
    int input[]= {13,6,31,14,29,44,3};
    selectionSort(input,7);
    for(int i=0; i<7; i++){
        cout<<input[i] <<" ";
    }
    cout<<endl;

}