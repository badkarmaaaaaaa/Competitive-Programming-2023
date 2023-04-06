#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    
    while(t--) {
        int ans=0;
        int n; cin>>n; int a[n];
        int mp[10000]={0};
        bool flag = false;

        for(int i=0; i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
            ans=ans^a[i];
        }

        if(n%2==0) {
            if(ans!=0) cout<<-1<<endl;
            else cout<<0<<endl;
        }

        else {
            cout<<ans<<endl;
        }

    }
    
    return 0;
}