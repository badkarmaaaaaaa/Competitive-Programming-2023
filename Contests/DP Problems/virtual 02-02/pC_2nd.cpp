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
    FIFO;
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        char c; cin>>c;
        
        string s; cin>>s;
        string sAux=s+s;
        //cout<<sAux<<endl;

        int ans=-1,aux;
        int LastGindx;

        for(int i=2*n-1; i>=0;i--) {
            if(sAux[i]=='g') {
                LastGindx=i;
                break;
            }
        }


        for(int i=LastGindx-1; i>=0;i--){
            if(sAux[i]=='g') {
                LastGindx=i;
            }
            else {
                if(sAux[i]==c) {
                    aux=LastGindx-i;
                }
                ans=max(ans,aux);
            }
        }

        if(c=='g') cout<<0<<endl;
        else {
            cout<<ans<<endl;
        }

    }
    return 0;
}