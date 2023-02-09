#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        long long n; cin>> n;
        long long k; cin>>k;
        long long aux=1;
        long long solution=0;
        while(n>aux) {
            solution+=n/aux;
            aux=aux*k*-1;
        }

        cout<<solution<<endl;

    }
    return 0;
}