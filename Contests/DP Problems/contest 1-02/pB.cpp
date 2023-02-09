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
    int t; cin>>t;
    while(t--) {
        int n,m,d; cin>>n>>m>>d;
        int permutation[n],pos[n+10],a[m];

        for(int i=0; i<n;i++) {
            cin>>permutation[i];
            pos[permutation[i]]=i+1;
        }

        for(int k=0; k<m;k++) {
            cin>>a[k];
        }

        int swapMin=10000000;
        for(int i=0; i<m-1;i++) {
            if((pos[a[i]]<pos[a[i+1]]) && (pos[a[i+1]]<=pos[a[i]]+d)) {
                if((pos[a[i]]+d+1)<=n) {
                    swapMin=min(pos[a[i+1]]-pos[a[i]],min((pos[a[i]]+d-pos[a[i+1]]+1),swapMin));
                    if(pos[a[i]]>1) {

                        if((pos[a[i]]+d-pos[a[i+1]]+1))
                        swapMin=min(swapMin,);
                    }
                }
                else {
                    swapMin=min(pos[a[i+1]]-pos[a[i]],swapMin);
                }
            }
            else {
                swapMin=0; break;
            }
        }

        cout<<swapMin<<endl;

    }
    return 0;
    //array NOT GOOD IF: pos(ai)<pos(a(i+1)) =< pos(ai)+d
}