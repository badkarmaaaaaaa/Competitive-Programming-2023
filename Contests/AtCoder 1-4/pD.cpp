#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,m; cin>>n>>m;
    long long ans=2e18;

    for(long long i=1; i<=n;i++) {
            long long  aux = ceil(m/(i*1.0));

            if(aux <= n) ans = min(ans, aux*i);
            if(i>aux) { break;}
        }

    if(ans==2e18) cout<<-1<<endl;
	else cout<<ans<<endl;
    
    return 0;
}