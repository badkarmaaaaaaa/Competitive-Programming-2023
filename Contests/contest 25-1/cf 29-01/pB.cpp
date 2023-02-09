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
        int n; cin>>n;
        int aux=n;
        vector <int> primeFactors;
        vector <int> primeExp;

        int minExp=1e9;
        
        for(int i=2; i*i <=n;i++){
            if(aux%i==0){
                primeFactors.push_back(i);
                int count=0;
                while(aux%i==0){
                    aux/=i;
                    count++;
                }
                primeExp.push_back(count);
            }
        }
        if(aux!=1) {
            primeFactors.push_back(aux);
            primeExp.push_back(1);
        }

        for(int w=0; w<primeExp.size();w++) {
            if(primeExp[w]<minExp) {
                    minExp=primeExp[w];
                }
        }

        int ans=0;

        for(int k=0; k<primeExp.size();k++) {
            int AccProduct=1; int minExpTemp=1e9;
            for(int i=0; i<primeFactors.size();i++) {
                if(primeExp[i]>0) {
                    AccProduct=AccProduct*primeFactors[i];
                    primeExp[i]=primeExp[i]-minExp;

                    if(primeExp[i]<minExpTemp && primeExp[i]>0) {
                        minExpTemp=primeExp[i];
                    }
                }

            }
            if(AccProduct!=1) {ans=ans+AccProduct*minExp;}
            minExp=minExpTemp;

        }

        cout<<ans<<endl;



    }
    return 0;
}