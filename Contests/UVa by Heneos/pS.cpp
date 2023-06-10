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
    int total = 0;
    while(t--) {
        float lenght, width, depth, weight; cin >> lenght >> width >> depth >> weight;

        bool flag = true;


        if((lenght > 56*1.00 or width > 45*1.00 or depth > 25*1.00 )) {
            if((lenght+width+depth > 125*1.00))    flag = false;
    
        }

        

        if(weight > 7*1.00) flag = false;

        cout << (flag ? "1":"0" )<< endl;

        if(flag) total++;

    }

    cout<< total<<endl;


    
    return 0;
}