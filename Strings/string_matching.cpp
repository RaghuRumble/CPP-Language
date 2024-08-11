#include<iostream>
#include<string>
using namespace std;
int main(){
    string text;
    string pat="hey";
    cin>>text;
    if(text.find(pat)==string::npos){
        cout<<"No Match";
    }
    else{
        cout<<"Match found at index "<<text.find(pat);
    }

}


string text;
    string pat;
    cin>>text;
    cin>>pat;
    if(text.find(pat)==string::npos){
        cout<<"No Match";
    }
    else{
        cout<<"Match found at index "<<text.find(pat);
    }