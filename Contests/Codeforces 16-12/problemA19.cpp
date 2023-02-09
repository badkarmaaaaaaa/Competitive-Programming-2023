#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
        }
        
        int maxVal=INT_MIN, minVal=INT_MAX;
        for(int i=0; i<n;i++) {
            maxVal=max(maxVal,a[i]);
            minVal=min(minVal,a[i]);
        }
        
        int maxExp=log2(maxVal)+1;
        int minExp=log2(minVal)+1;

        for(int i=0;i<maxExp;i++) {
            if(!(maxVal & (1<<i))) {
                for(int j=0; j<n;j++) {
                    if(a[j] & (1<<i)) {
                        maxVal |= (1<<i);
                        a[j] &= ~(1<<i);
                        break;
                    }
                }
            }
        }

        for(int i=0;i<minExp;i++) {
            if((minVal & (1<<i))) {
                for(int j=0; j<n;j++) {
                    if(!(a[j] & (1<<i))) {
                        minVal &= ~(1<<i);
                        a[j] |= (1<<i);
                        break;
                    }
                }
            }
        }


        cout<<maxVal-minVal<<endl;

    }
    return 0;
}