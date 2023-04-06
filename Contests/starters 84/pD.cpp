#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;

        int a[n];
        int accXor=0;
        int OneInArray=0, ZeroInArray=0;

        for(int i=0; i<n-1;i++) {
            int aux=s[i]-48;
            accXor=accXor^aux;
            a[i]=accXor;
            if(a[i]==1) OneInArray++;
            else ZeroInArray++;
        }

        //cout<<OneInArray<<" "<<ZeroInArray<<endl;

        //Picking 0 as X1;

        int ans1=OneInArray;
        int ans2=1+ZeroInArray;
        cout<<max(ans1,ans2)<<endl;
    }
    
    return 0;
}