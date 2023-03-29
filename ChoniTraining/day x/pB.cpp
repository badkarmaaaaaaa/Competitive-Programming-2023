#include<bits/stdc++.h>
using namespace std;
#define N 32768

int main() {
    int n;cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++) {
        int aux; cin>>aux;
        a[i]=aux;
        int auxA=log2(N/aux);
        b[i]=auxA;
    }

    for(int i=0;i<n;i++) {
        int ans=N-a[i]*pow(2,b[i]);
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}