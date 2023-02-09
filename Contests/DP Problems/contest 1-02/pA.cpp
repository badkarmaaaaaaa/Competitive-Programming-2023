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
        int ArraySum=0;
        int a[n];

        bool twoFlag=false,zeroFlag=false,minusTwoFlag=0;

        for(int i=0; i<n;i++) {
            cin>>a[i];
            ArraySum=ArraySum+a[i];
        }

        for(int i=0;i<n-1;i++) {
            if(a[i]==-1 && a[i+1]==-1) {
                twoFlag=true;
            }
            if((a[i]==-1 && a[i+1]==1) or (a[i]==1 && a[i+1]==-1)) zeroFlag=true;
            if(a[i]==1 && a[i+1]==1) minusTwoFlag=true;
        }

        if(twoFlag) {
            cout<<ArraySum+4<<endl;
        }
        else {
            if(zeroFlag) cout<<ArraySum<<endl;
            else {
                cout<<ArraySum-4<<endl;
            }
        }

    }
    return 0;
}