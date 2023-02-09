#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int memo[1000005];
string s;
long long dp(int i) {
    if(i<=0) return 1;
    if(memo[i]!=-1) return memo[i];
    if(s[i]=='C') {
        return memo[i]=(dp(i-1)+dp(i-2))%MOD;
    }
    if(s[i]=='T') {
        return memo[i]=dp(i-1)%MOD;
    }
}

int main() {
    cin>>s;
    memset(memo,-1,sizeof(memo));
    cout<<dp(s.size()-1)<<endl;
    return 0;
}