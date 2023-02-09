#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int ans1, ans2;

        if(n%2==0) {
            cout<<n/2<<" "<<n/2<<endl;
        }

        else {
            ans1=n/2; ans2=n-ans1;
            if(ans1%10==9) {
                int aux=ans1, count=0;
                while(aux) {
                    aux=aux/10; count++;
                }
                int res=0;
                for(int i=0; i<count-1;i++) {
                    res=res+4*pow(10,i);
                }
                ans1=ans1-res;
                ans2=n-ans1;
            }
            if(ans2%10==9) {
                int aux=ans2, count=0;
                while(aux) {
                    aux=aux/10; count++;
                }
                int res=0;
                for(int i=0; i<count-1;i++) {
                    res=res+4*pow(10,i);
                }
                ans2=ans2-res;
                ans1=n-ans2;
            }
            cout<<ans1<< " "<<ans2<<endl;
        }
        
        
    }
    
    return 0;
}