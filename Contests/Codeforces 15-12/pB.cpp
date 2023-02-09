#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull factorial(int n) {
    ull aux=1;

    for(ull i=2; i<=n;i++) {
        aux=aux*i;
    }

    return aux;
}


int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        cout<<factorial(n)<<endl;
    }
    return 0;
}

