// 1.number of rows
// 2. number of column in ith row 
// 3. what to print


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<< "*";
            j++;
        }
        cout<< endl;
        i++;
    }
}
