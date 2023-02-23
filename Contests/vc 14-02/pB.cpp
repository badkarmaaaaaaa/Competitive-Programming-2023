#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];

        int oddCount=0, evenCount=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];

            if(a[i]%2==0) {
                evenCount++;
            }
            else oddCount++;
        }

        if(evenCount==0) {
            cout<<0<<endl;
        }
        else {
            if(oddCount>=1) {
                cout<<evenCount<<endl;
                continue;
            }
            else {
                bool condition = true;
                int auxCount=1;
                while(condition) {
                    for(int i=0;i<n;i++) {
                        a[i]=a[i]/2;
                        if(a[i]%2==1) {
                            condition=false;
                        }
                    }
                    if(condition) {
                        auxCount++;
                    }
                }

                cout<<n-1+auxCount<<endl;
            }



        }
    }
    
    return 0;
}