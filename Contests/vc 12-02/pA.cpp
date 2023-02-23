#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long a,b; cin>>a>>b;
        int  n, m; cin>>n>>m;
        long long aux=floor(n/(m+1));
        long long aux2=n-aux*(m+1);

        long long ans;
        //cout<<aux<<" "<<aux2<<endl;
        if(n>=m+1) {
            ans = min(n*b,(m)*a*aux + (n-(m+1)*aux)*b);
        }
        else {
            ans = min(n*b,n*a);
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}