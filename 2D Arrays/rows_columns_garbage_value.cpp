#include<iostream>
using namespace std;
void printArray(int a[5][5], int m, int n){
    // pehle 5 ki jagah 2 tha
    // ab pehle me bhi 5 daaldo
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<< a[i][j] <<" ";
        }
        cout<<endl;
    }
}
int main(){
    // int a[][2]= {{1,2}, {3,4}};
    // printArray(a, 2, 2);

    //  int a[][5]= {{1,2}, {3,4}};
    // printArray(a, 2, 5);

    int a[5][5]= {{1,2}, {3,4}};
    printArray(a, 5, 5);
}