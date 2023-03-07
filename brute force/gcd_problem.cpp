//9:34 - Editorial 9:49
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a,b,c;
        c=1;
        for(int i=2; i<n;i++) {
            a=i;
            b=n-1-i;
            if(__gcd(a,b)==1) break;
        }

        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    
    return 0;
}