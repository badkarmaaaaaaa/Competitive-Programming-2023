#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,s; cin>>n>>s;
        int a[n];
        int prefixSum[n];
        
        int sum=0;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            sum+=a[i];
            prefixSum[i]=sum;
        }

        // for(int i=0; i<n;i++) {
        //     cout<<prefixSum[i]<<endl;
        // }

        int ans=INT_MAX;
        if(sum<s) cout<<-1<<endl;
        else {
            if(sum==s) cout<<0<<endl;
            else {
                for(int i=0; i<n; i++) {
                    for(int j = n-1; j>i;j--) {
                        if(prefixSum[j]-prefixSum[i]==s) {
                            ans = min(ans,(j-i+1));
                        }
                    }
                }
            }
        }

        cout<<ans<<endl;


    }
    
    return 0;
}