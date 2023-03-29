#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int ans=n+2*floor(n/2)+2*floor(n/3);

        cout<<ans<<endl;
    }
    
    return 0;
}