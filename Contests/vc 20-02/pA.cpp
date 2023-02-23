#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int aX[n], aY[n];

        for(int i=0; i<n;i++) {
            cin>>aX[i]>>aY[i];
        }

        sort(aX,aX+n);
        sort(aY,aY+n);

        int ans=0; 

        if(aX[n-1]>=0) ans=ans+2*aX[n-1];
        if(aX[0]<0) ans -= 2*aX[0];
        if(aY[0]<0) ans -= 2*aY[0];
        if(aY[n-1]>=0) ans=ans+2*aY[n-1];
        

        cout<<ans<<endl;
    }
    
    return 0;
}