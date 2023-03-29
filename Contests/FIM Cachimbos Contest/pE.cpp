#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long n,k; cin>>n>>k;

        if(n==1) {
            n=2;
            k--;
        }

        bool Prime=true;

        for(int i=2; i*i<=n;i++) {
            if(n%i==0 && k>=1) {
                Prime=false;
                n=n+i;
                k--;
                break;
            }
        }

        if(Prime && k>=1) {
            n=n+n;
            k--;
        }

        n=n+2*k;

        cout<<n<<endl;
    }
    
    return 0;
}