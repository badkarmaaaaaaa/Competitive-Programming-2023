#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int x,y; cin>>x>>y;
        int diff =x-y;
        int ans=0;
        for(int i=1; i<=1e5;i++) {
            if((i*(i+1))/2 >= diff) {
                ans = i; break;
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}