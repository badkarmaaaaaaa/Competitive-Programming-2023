#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];

        for(int i=0; i<n;i++) {
            cin>>a[i];
        }

        bool condition = true;

        for(int i=0; i<n;i++) {
            for(int k=i+2; k>=2;k--) {
                if(a[i]%k==0)  {
                    condition=false;
                    break;
                }
            }
        }

        if(condition) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    
    return 0;
}