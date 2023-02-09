#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define sz(A) int(A.size())
#define FIFO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(A) begin(A),end(A)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<pair<ll,ll>> vll;
typedef vector<pair<int,int>> vii;


int main () {
    int t; cin>>t;
    while(t--) {
        int n,x;cin>>n>>x;
        int a[n];
        ll minusSum=0;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            if(a[i]<=x) {
                minusSum=minusSum-2*a[i];
            }
        }
        ll ans=(1LL*x*(x+1))/2 + minusSum;
        cout<<ans<<endl;
    }
    return 0;
}