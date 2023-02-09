#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        
        if(n%2==0) {
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
            if(n==1) {
                cout<<1<<" "<<2<<endl;
            }
            else {
                int minSum=2*n+1-(n-1)/2;
                for(int i=1; i<=n;i=i+2) {
                    cout<<minSum-i<<" "<<i<<endl;
                    minSum=minSum+1;
                }
                for(int i=2; i<=n;i=i+2) {
                    cout<<minSum-i<<" "<<i<<endl;
                    minSum=minSum+1;
                }

            }
        }

    }
    
    return 0;
}