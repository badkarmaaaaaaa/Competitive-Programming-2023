#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long n,x,p; cin>>n>>x>>p;
        long long aux = n-x-1;

        if(2*aux <= p*p + p) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
    
    return 0;
}