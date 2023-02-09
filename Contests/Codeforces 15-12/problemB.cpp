#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) {
            int aux; cin>>aux;
            a[i]=aux;
        }

        int b[n];
        int numOp=0;
        for(int i=0;i<n;i++) {
            b[i]=1<<(ceil(log2(a[i])))-a[i];
            if(b[i]!=0) numOp++;
        }

        cout<<numOp<<endl;
        for(int i=0;i<n;i++) {
            if(b[i]!=0) {
                cout<<i+1<<" "<<b[i]<<endl;
            }
        }
    }
    return 0;
}

