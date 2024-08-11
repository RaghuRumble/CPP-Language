#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    string word;
    cin>>word;
    for(int l=0;l<word.size();l++){
        for(int r=l;r<word.size();r++){
            int index=l;
            int length=r-l+1;
            cout<<word.substr(index,length)<<endl;
        }
    }
}