#include<bits/stdc++.h>
using namespace std;

int main() {
        long long k,a,b,ansI; cin>>k>>a>>b;

        for( long long i=a; i<a+k;i++) {
            if(i%k==0) {
                ansI=i; break;
            }
        }

        // a partir de ansI cada k se cuenta.

        //k*(m)<b-ansI
        unsigned long long ans=1+floor((b-ansI)/k);

        cout<<ans<<endl;
    
    return 0;
}