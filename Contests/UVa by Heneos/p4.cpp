#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;

        long long ans = ceil((1.0*(n-2))/3) * ceil((1.0*(m-2))/3);
        cout<<ans<<endl;
    }

    return 0;
}