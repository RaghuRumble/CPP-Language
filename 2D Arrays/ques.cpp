#include<iostream>
using namespace std;

int findLargest(int input[][1001], int nRows, int mCols){

 int m=mCols;
    int n=nRows;
    int sumR=0;
    int sumC=0;
    int maxC=0;
    int maxR=0;
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            sumC=sumC+input[i][j];
        }
        if(maxC<sumC){
            maxC=sumC;
        }
        sumC=0;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sumR=sumR+input[i][j];
        }
        if(maxR<sumR){
            maxR=sumR;
        }
        sumR=0;
    }
    if(maxC>maxR){
        return maxC;
    }
    else{
        return maxR;
    }
}
	