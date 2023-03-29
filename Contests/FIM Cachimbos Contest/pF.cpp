#include<bits/stdc++.h>
using namespace std;
#define N 1e18

int main() {
    long long k; cin>>k;

    long double fib = (1+sqrt(5))/2;
    long long ans;

    ans = ceil(((log10(5)/2)+k-1)/(log10(fib)));


    if(k==1) cout<<1<<endl;    
    else cout<<ans<<endl;
    

    
    return 0;
}