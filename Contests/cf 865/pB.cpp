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
        int n; cin>>n;

        int ans[n][2];

        if(n%2==0) {
            ans[0][0]=2*n;
            ans[n-1][1]=2*n-1;

            for(int i=1; i<=n;i++) {
                ans[i-1][i%2]=i;
            }

            for(int i= 2; i<n;i++) {
                ans[i-1][(i+1)%2]=n+i-1;
            }


            // cout<<2*n<<" ";
            // for(int i=2;i<2*n;i=i=i+2) {
            //     cout<<i<<" ";
            // }
            // cout<<endl;

            // for(int i=1;i<= 2*n -1;i=i+=2) {
            //     cout<<i<<" ";
            // }
            // cout<<endl;
        }

        else  {
            ans[0][0]=2*n;
            ans[n-1][1]=1;

            for(int i=1; i<=n-1;i++) {
                ans[i-1][i%2]=i+1;
            }

            for(int i= 2; i<=n;i++) {
                ans[i-1][(i+1)%2]=n+i-1;
            }

        }

        for(int i=0; i<2;i++) {
            for(int j=0; j<n;j++) {
                cout<<ans[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}