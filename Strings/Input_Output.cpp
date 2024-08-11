#include<iostream>
using namespace std;
int main(){
    // string l1,l2;
    // getline(cin,l1);
    // getline(cin,l2);

    // cout<<l1<<endl<<l2;

    string name;
    int age;

    cin>>age;
    cin.ignore(1);
    getline(cin, name);

    cout<<name<<" "<<age;

}