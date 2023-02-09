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
        int n,s,r; cin>>n>>s>>r;
        cout<<s-r<<" ";
 
        int aprox =floor(r/(n-1));
        int aux=r-aprox*(n-1);
 
        for(int i=0;i<aux;i++) {
            cout<<aprox+1<<" ";
        }
        for(int i=aux;i<n-1;i++) {
            cout<<aprox<<" ";
        }
 
        cout<<endl;
 
    }
    return 0;
}