#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];
        int maxAlice=-1;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            maxAlice=max(maxAlice,a[i]);
        }

        int m; cin>>m; int b[m];

        int maxBob=-1;
        for(int i=0; i<m;i++) {
            cin>>b[i];
            maxBob=max(maxBob,b[i]);
        }

        //Alice first
        if(maxAlice>=maxBob) {
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;

        //Bob first

        if(maxBob>=maxAlice) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;


    }
    
    return 0;
}