// 9:53 -
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        long long ans;

        // Every third number would make gcdSum(x)=3
        for(long long i=n;i<=n+2;i++) {
            long long sumCif=0;
            long long auxI=i;
            while(auxI) {
                sumCif+=auxI%10;
                auxI=auxI/10;
            }

            if(__gcd(i,sumCif)>1) {
                ans=i; break;
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}