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

#define N 108
int memo[N][N];
int aArray[100],bArray[100];
int a,b;

int dp(int it1, int it2) {
    if(it1==a or it2==b) return 0;
    int &ret = memo[it1][it2];

    if(ret!=-1) return ret;
    int ans=0;

    if(aArray[it1] == bArray[it2]) ans= 1 + dp(it1+1,it2+1);

    else ans=max(dp(it1+1,it2), dp(it1,it2+1));

    return ret=ans;
}

int main () {
    int count=0;
    while(cin>>a>>b) {
        if(a==0 && b==0) break;

        for(int i=0; i<N;i++) {
            for(int j=0; j<N;j++) {
                memo[i][j]=-1;
            }
        }

        count++;
        for(int i=0; i<a;i++) {
            cin>>aArray[i];
        }
        for(int i=0; i<b;i++) {
            cin>>bArray[i];
        }

        cout<<"Twin Towers #"<<count<<endl;
        cout<<"Number of Tiles : "<<dp(0,0)<<endl;
        cout<<endl;

    }


    return 0;
}