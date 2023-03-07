//9:28-9:34
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n;i++) {
            cin>>a[i];
        }

        int ans = (10-n)*(9-n)*6/2;
        cout<<ans<<endl;
    }
    
    return 0;
}