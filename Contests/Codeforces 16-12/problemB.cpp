#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,k; cin>>n>>k;
        long long h[n], p[n];

        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            h[i]=aux;
        }

        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            p[i]=aux;
        }

        while(k>0) {
            long long minHealth=1e10, maxHealth=-1;
            int minIndex=0;
            for(int i=0;i<n;i++) {
                if((h[i]-k)>0) {
                    h[i]=h[i]-k;
                }
                else {
                    h[i]=0;
                }
                maxHealth=max(maxHealth,h[i]);
                if(minHealth>h[i] && h[i]>0) {
                    minHealth=h[i];
                    minIndex=i;
                }
            }

            if(maxHealth<=0) {
                cout<<"YES"<<endl;
                break;
            }

            k=k-p[minIndex];
            if(k<=0) {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}