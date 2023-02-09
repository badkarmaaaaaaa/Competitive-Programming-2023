#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;

    int a[n];
    for(int i=0; i<n;i++) {
        int aux; cin>>aux;
        a[i]=aux;
    }

    sort(a,a+n);

    if(n%2!=0) {
        int indx=(n+1)/2;
        cout<<a[indx-1]<<endl;
    }
    else {
        int indx=n/2;
        cout<<a[indx-1]<<endl;
    }

}

