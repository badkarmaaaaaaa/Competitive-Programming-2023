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
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
        }
        int sum[n+1];
        sum[0]=0;
        for(int i=1; i<=n;i++) {
            sum[i]=sum[i-1]+a[i-1];
        }

        int maxVal=1;
        for(int i=1, i<n;i++) {
            for(int k=2;k<n/2;k++)
            if(sum[n+1]%k && sum[n+1-i]%k) {

            }
        }
        
    }
}