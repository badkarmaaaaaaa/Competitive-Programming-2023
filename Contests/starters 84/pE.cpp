#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int maxNumTimes=0;
        int secMaxNumTimes=0;
        int a[n];

        for(int i=0; i<n;i++) {
            cin>>a[i];
        }

        sort(a,a+n);

        for(int i=0; i<n;i++) {
            if(a[i]==a[n-1]) maxNumTimes++;
        }


        bool secondCase=false;
        bool secondCasePossible=false;
        if(maxNumTimes==1) {
            for(int i=0; i<n-1;i++) {
                if(a[i]==a[n-2]) secMaxNumTimes++;
                if(a[i]!=a[n-2]) secondCasePossible=true;
            }
            secondCase = true;
        }

        //cout<<maxNumTimes<<endl;

        if(n==2) {
            cout<<"NO"<<endl;
        }
        else {

            if(secondCase) {
                if (secondCasePossible) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                continue;
            }

            if(n%2==1) {
                if(maxNumTimes > n/2 +1) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            else {
                if(maxNumTimes > n/2) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }

        }
    }
    
    return 0;
}