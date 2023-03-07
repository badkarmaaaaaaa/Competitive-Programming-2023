//CARD TRICK 10:08 - 10:17

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];

        for(int i=0; i<n;i++) {
            cin>>a[i];
        }

        int m; cin>>m; int b[m];
        long long sumB=0;
        for(int i=0; i<m;i++) {
            cin>>b[i];
            sumB=sumB+b[i];
        }
        long long indx = sumB%n;
        cout<<a[indx]<<endl;
    }
    
    return 0;
}