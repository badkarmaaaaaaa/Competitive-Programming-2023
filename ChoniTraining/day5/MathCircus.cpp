#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;
        if(k%2==1) {
            cout<<"YES"<<endl;

            for(int i=1; i<n;i=i+2) {
                cout<<i<<" "<<i+1<<endl;
            }

            continue;
            
        }
    
        else {
            bool flag=true;
            for(int i=2;i<=n;i=i+2) {
                if(i%4!=0 && (i+k)%4!=0) {
                    flag = false; break;
                }
            }

            if(flag) {
                cout<<"YES"<<endl;
                for(int i=4; i<=n;i=i+4) {
                    cout<<i-1<<" "<<i<<endl;
                }

                for(int i=2; i<=n;i=i+2) {
                    if(i%4!=0) {
                        cout<<i<<" "<<i-1<<endl;
                    }
                }

            }

            else {
                cout<<"NO"<<endl;
            }
        }


    }
    
    return 0;
}