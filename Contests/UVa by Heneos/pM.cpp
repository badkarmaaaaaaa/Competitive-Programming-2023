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
        int n; cin>> n; int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int maxDiff=a[1]-a[0], minNumber=a[0]; 

        for(int i=1 ; i < n ; i++) {
            if ( a[i] - minNumber > maxDiff ) {
                maxDiff=a[i] - minNumber;
            }
            if( a[i] < minNumber) minNumber=a[i];
        }

        cout<<maxDiff<<endl;
    }
    
    return 0;
}