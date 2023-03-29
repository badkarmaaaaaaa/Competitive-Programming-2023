#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n, h,m; cin>>n>>h>>m;
        int aux=h*60+m;

        int minH, minM;

        int ans=INT_MAX;

        for(int i=0; i<n;i++) {
            cin>>minH>>minM;

            int auxMin = minH*60+minM;

            if(auxMin<aux) {
                auxMin+=24*60;
            }

            ans=min(ans,auxMin-aux);
        }

        cout<<ans/60<<" "<<ans%60<<endl;
    }
    
    return 0;
}