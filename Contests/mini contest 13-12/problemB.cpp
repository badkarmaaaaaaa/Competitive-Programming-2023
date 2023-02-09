#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n];
        bool count=true;

        for(int i=0;i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
        }

        if(n==1) {
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0;i<n-1;i++) {
            if(a[i+1]%a[i]==0 && a[i]!=1) {
                count=false;
            }
        }

        if(count) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }


        
    }
        
    return 0;
}

