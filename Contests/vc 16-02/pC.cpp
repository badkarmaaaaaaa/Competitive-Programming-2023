#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];
        float sum=0;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }

        float med = sum/n;
        //cout<<med<<endl;

        int lowVal=0, highVal=0;

        for(int i=0; i<n;i++) {
            if(a[i]<med) {
                lowVal++;
            }
            else {
                highVal++;
            }
        }
        
        int indicator=-1;
        if(2*lowVal>=n) {
            cout<<"YES"<<endl;
            sort(a,a+n);
            continue;
        }

        if(2*highVal>=n) {
            cout<<"YES"<<endl;
            sort(a,a+n);
            continue;
        }


        if(indicator==-1) cout<<"NO"<<endl;

    }
    
    return 0;
}