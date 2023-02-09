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

#define N 1008
int memo[N][N];
string s1,s2;

int dp(int it1, int it2) {
    if(it1==s1.size() or it2==s2.size()) return 0;
    int &ret = memo[it1][it2];

    if(ret!=-1) return ret;
    int ans=0;

    if(s1[it1] == s2[it2]) ans= 1 + dp(it1+1,it2+1);

    else ans=max(dp(it1+1,it2), dp(it1,it2+1));

    return ret=ans;
}

int main () {
    while(getline(cin,s1) && getline(cin,s2)) {
        if(s1.size()==0 && s2.size()==0) {
            break;
        }

        for(int i=0; i<N;i++) {
            for(int j=0; j<N;j++) {
                memo[i][j]=-1;
            }
        }
        cout<< dp(0,0) <<endl;
    }


    return 0;
}