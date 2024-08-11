#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;

    // == equal
    if(a==b){
        cout<<"Equal";
    }else{
        cout<<"Not Equal";
    }
    cout<<endl;

    // < less than > grearter than
    // this is according to dictionary order
    if(a>b){
        cout<<"a>b";
    }else{
        cout<<"a<b";
    }
}