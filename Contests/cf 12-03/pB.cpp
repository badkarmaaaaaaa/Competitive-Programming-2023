#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k,d,w; cin>>n>>k>>d>>w;
        int times[n];

        for(int i=0; i<n;i++) {
            cin>>times[i];
        }

        int aux=times[0]+w;
        int auxD=d;
        int auxK=k;
        int auxVaccine=0;

        int ans=1;
        for(int i=0; i<n;i++) {
            //int aux=times[i]+w;
            //int auxD=d;
            //int auxK=k;
            //int auxVaccine=0;

            if(i==n-1) {
                if(times[i]>aux+d) {
                    ans++;
                }
                cout<<ans<<endl;
                continue;
            }

            if(times[i]<=aux+d) { 
                auxK--;
                auxVaccine++;

                if(auxK==0) {
                    aux=times[i+1]+w;
                    auxK=k;
                    auxVaccine=0;
                    ans++;
                }
            }

            else {
                aux=times[i]+w;
                auxK=k;
                auxVaccine=0;
                ans++;
                i=i-1;
            }

            //
            
            // for(int j=i;j<n;j++) {
            //     if(times[j]<=aux+d) { 
            //         auxK--;
            //         auxVaccine++;

            //         if(auxK==0 or i+auxVaccine==n) break;
            //     }
            // }
            //i=i+auxVaccine-1;
            //ans++;
        }
        //cout<<ans<<endl;
    }
    
    return 0;
}