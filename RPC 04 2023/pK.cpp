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
    int a, b, c;
    cin >> a >> b >> c;
    string s;
    cin >> s;
    string total;
    cin >> total;

    vector<int>letras[28];
    for(int i = 0; i < total.size(); i++) {
        letras[total[i] - 'a'].pb(i);
    }
    for(auto e : s) {
        int x = e - 'a';
        ll curtotal = 0;
        if(letras[x].size() == 0) {
            cout << 0 << "\n";
            continue;
        }

        curtotal += 2LL*c;
        curtotal += b;
        if(letras[x].size() == 1) {
            cout << curtotal << "\n";
            continue;
        }
        for(int i = 1; i < letras[x].size(); i++) {
            int u = letras[x][i] - letras[x][i - 1] - 1;
            curtotal += min(1LL*a*u, 2LL*c);
            curtotal += b;
        }
        cout << curtotal << "\n";
    }
    return 0;
}