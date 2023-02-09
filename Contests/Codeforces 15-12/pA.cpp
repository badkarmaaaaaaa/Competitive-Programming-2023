#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n, k; cin>>n>>k;
        int a[n];
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
        }
        int indx=0;
        for(int i=0; i<k;i++) {
            while(a[indx]==0 and indx<(n-1)) {
                indx++;
            }
            if(indx==n-1) break;
            a[indx]=a[indx]-1;
            a[n-1]=a[n-1]+1;
        }

        for(int i=0; i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

