#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int a,b; cin>>a>>b;
        int minVal=min(abs(a),abs(b));
        int maxVal=max(abs(a),abs(b));
        int ans= 2*(abs(minVal));

        if(abs(minVal)!=abs(maxVal)) {
            ans+=2*(abs(maxVal)-abs(minVal)-1)+1;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}