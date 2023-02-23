#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];
        int sum=0;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            sum= sum+a[i];
        }

        bool flag = false;
        for(int i=0; i<n;i++) {
            if(a[i]*n == sum) {
                flag = true;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}