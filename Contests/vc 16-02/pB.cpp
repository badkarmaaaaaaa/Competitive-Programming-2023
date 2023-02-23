#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int p[n];
        cin>>p[0];

        bool flag = true;

        for(int i=1; i<n; i++) {
            cin>>p[i];
            if(p[i]<p[i-1]) flag=false;
        }

        if(flag) cout<<0<<endl;
        else {
            int count=0;
            for(int k=1; k<n;k++) {
                if(p[k-1]>p[k]) {
                    count++;
                    k++;
                }
            }

            cout<<count<<endl;

        }

    }
    
    return 0;
}