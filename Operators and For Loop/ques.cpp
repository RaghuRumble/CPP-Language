#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0){
        int rem=n%10;
        ans=ans+rem*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
	
}