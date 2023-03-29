// 11:25

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        int minVal,maxVal;

        if(n==1 && m==1) cout<<0<<endl;
        else {
            minVal=min(n,m);
            maxVal=max(n,m);
            cout<<2*minVal-2+maxVal<<endl;
        }
    }
    
    return 0;
}