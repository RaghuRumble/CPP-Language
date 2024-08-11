#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char s = 'A'+i-1;
        while(j<=n){
            char ch = s+j-1;
            cout<< ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}