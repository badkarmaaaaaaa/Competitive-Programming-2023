#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long n,k; cin>>n>>k;
        bool flag = false;

        for(long long i=0; i<=n/k;i++) {
            if((n-k*i)%2==0) {flag = true; break;}
        }
        
        cout<< ( flag? "YES":"NO")<<endl;
    }
    
    return 0;
}