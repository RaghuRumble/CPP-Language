#include<iostream>
using namespace std;

int main(){
	char c;
	c = cin.get()
	int ch=0;
	while(c>='a' && c<='z' && c!='$'){
		ch++;
		cout<<ch <<" ";
	}
	int digits=0;
	while(c>='0' && c<='9' && c!='$'){
		digits++;
		cout<<digits <<" ";
	}
	int spaces=0;
	while(c=='\t' || c=='\n' || c==' ' && c!='$'){
		spaces++;
		cout<<spaces;
	}