#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    // a.push_back('@');
    // b.insert(1,"19");
    // cout<<a<<" "<<b;

    a.pop_back();
    b.erase(1,4);
    cout<<a<<" "<<b;
}