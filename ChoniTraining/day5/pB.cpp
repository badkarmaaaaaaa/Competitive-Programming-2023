#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long n,k,b; cin>>n>>k>>b;
        long long s; cin>>s;
        long long prod=k*b;

        // cout<<prod<<endl;
        // cout<<s<<endl;
        // bool flag = (prod==s);
        // cout<<flag<<endl;


        if(prod<s && n==1) {
            cout<<-1<<endl;
            continue;
        }

        if((prod) > s) {
            cout<<-1<<endl;
            continue;
        }

        if(prod<s && ((s-prod)/(n))>=k) {
            cout<<-1<<endl;
            continue;
        }

        long long ans[n];
        int nAux=n;

        ans[0]=prod;
        s=s-ans[0];
        n--;
        long long sum=0;

        for(int i=0; i<nAux;i++) {
            sum=sum
            ans[i]+=min(s-sum,k-1)
        }


        for(int i=0; i<nAux;i++) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}