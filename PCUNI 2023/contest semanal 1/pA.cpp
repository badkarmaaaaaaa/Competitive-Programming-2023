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

// TY CHONON

int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int n=10;
        int a[n]={0};

        for(int i=0; i< 4;i++) {
            int j = s[i] -'0';
            a[j]++;
        }

        sort(a,a+10);

        // for(int x=0; x<10;x++) {
        //     cout<<a[x]<<" ";
        // }

        // cout<<endl;

        if(a[9]==4) {
            cout<<-1<<endl; continue;
        }

        if(a[9]==3) {
            cout<<6<<endl; continue;
        }
        
        cout<<4<<endl;

    }
    
    return 0;
}