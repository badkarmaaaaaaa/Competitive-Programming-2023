#include<bits/stdc++.h>
using namespace std;



int main() {
    int t; cin>>t;
    while(t--) {
        long long s,a,b,c; cin>>s>>a>>b>>c;

        long long n=s/c;
        long long ans=n+(n/a)*b;

        cout<<ans<<endl;
    }
    return 0;

}