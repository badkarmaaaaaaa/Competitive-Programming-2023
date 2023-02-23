#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;

        int a[n];
        int repetitions[110]={0};
        int countZeros=0;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            repetitions[a[i]]++;
            if(a[i]==0) {
                countZeros++;
            }
        }
        bool repet=false;
        int aux=0;
        for(int i=0; i<110;i++) {
            if(repetitions[i]>=2) {
                aux=repetitions[i]/2 + aux;
                repet=true;
            }
        }
        int ans;

        if(repet) {
            ans=2+(n-2);
        }
        else {
            ans=3+(n-2);
        }

        if(countZeros) {
            ans=(n-countZeros+1)-1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}