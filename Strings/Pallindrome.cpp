#include<iostream>
using namespace std;
int main(){
    string a;
    int n = a.size();
    cin>>a;
    int flag=1;
    for(int i=0; i<n; i++){
        if(a[i]!=a[n-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"A Pallindrome";
    }
    else{
        cout<<"Not a Pallindrome";
    }
}