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
#define N 2000

int memo[N][N];
string s1, s2;

int dp(int pos1, int pos2) {
    if(pos1==s1.size() or pos2==s2.size()) return s2.size()-pos2+s1.size()-pos1;
    int &ret = memo[pos1][pos2];

    if(ret!=-1) return ret;
    int ans=0;

    if(s1[pos1] == s2[pos2]) ans= dp(pos1+1,pos2+1);

    else ans= 1 + min(dp(pos1+1,pos2),min(dp(pos1,pos2+1),dp(pos1+1,pos2+1)));

    return ret=ans;
}


int main () {
    int lenghtX;
    int lenghtY;
    while(cin>> lenghtX >> s1 >> lenghtY >> s2) {
        memset(memo,-1,sizeof(memo));
        cout<< dp(0, 0)<< endl;
    }

    return 0;
}