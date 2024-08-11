#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    while(cin>>word){
  // jab tk word input hota rahega ye loop chalta rahega
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
    return 0;
}

// iska basic tareeka coding ninjas pe kraa h