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

int main() {
    ll n,cx,cy,r; cin>>n>>cx>>cy>>r;
    int count=0;
    for(int i=0; i<n;i++) { 
        ll xi,yi; cin>>xi>>yi;
        if(1LL*(sqrt(pow(cx-xi,2)+pow(cy-yi,2)))<=r) {
            count++;
        }
    }
    cout<<count<<endl;
}