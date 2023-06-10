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

// TY Cegax

int main() {
    int n,m; cin>>n>>m;
    vi h;
    vi t;

    for(int i=0; i<n;i++) cin>>h[i];
    for(int i=0; i<m;i++) cin>>t[i];

    sort(h,h+n);

    for(int i=0; i<m;i++) {
        int up = upper_bound (h.begin(),h.end(),t[i]);
        cout<<h[up-h.begin()-1]<<endl;
    }
    
    return 0;
}