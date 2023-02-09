#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int l,r,a; cin>>l>>r>>a;
        int n1=floor(float (r+1)/a);
        int n2=ceil(float (l+1)/a);
        //cout<<n1<<" "<<n2<<endl;

        int ans;    
        if(n1==n2) {
            if(n1==1) {
                ans=a-1;
                cout<<ans<<endl;
            }
            else {
                ans=(n1-1)*a;
                cout<<ans<<endl;
            }
        }
        else {
            int maxVal=-1;
            for(int k=l;k<=r;k++) {
                float aux = k/a;
                int aux2=floor(aux);
                maxVal=max(maxVal,k-(aux2)*(a-1));
            }
            ans=maxVal;
            cout<<ans<<endl;
        }
        
    }
    return 0;
}