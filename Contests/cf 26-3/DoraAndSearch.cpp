#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
        int maxVal=-1,minVal=INT_MAX;

        for (int i=0; i<n;i++) {
            cin>>a[i];
            minVal=min(minVal,a[i]);
            maxVal=max(maxVal,a[i]);
        }

        for(int i=0; i<n;i++) {
            if(a[i]==minVal or a[i]==maxVal) {
                minVal
            }
        }

    }
    
    return 0;
}