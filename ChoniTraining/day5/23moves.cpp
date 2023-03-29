#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int ans=0;


        if(n==2) {
            ans=1;cout<<ans<<endl; continue;
        }
        if(n==1) {
            ans=2;cout<<ans<<endl; continue;
        }
        if(n==3) {
            ans=1;cout<<ans<<endl; continue;
        }

        //cout<<n/3<<endl;
        ans = ceil(n/3.0);
        
        cout<<ans<<endl;
    }
    
    return 0;
}