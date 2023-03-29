#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int a,b,c,d; cin>>a>>b>>c>>d;

        int x = a-c-b+d;
        int ans =0;

        if(x>=0 && d>=b) {
            ans=ans+x;
            ans+=d-b;
            cout<<ans<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    
    return 0;
}