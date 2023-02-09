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
#define MOD 1000000007

int main () {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int count=0;
        int a[n];
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux%2;
        }
        //bool flag=true;
        for(int i=0; i<n-1;i++) {
            if(a[i]+a[i+1]!=1) {
                count++;}
        }
        cout<<count<<endl;

    }
    return 0;
}