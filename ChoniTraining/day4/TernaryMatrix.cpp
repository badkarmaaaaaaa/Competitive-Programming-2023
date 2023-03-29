#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m; // rows and columns

        for(int j=0; i<n;j++) {
            for(int i=0; i<m;i++) {
                if(i%2==0) {
                    cout<<"1 0";
                    i++;
                }
                else {
                    cout<<"0 1";
                    i++;
                }
            }
            cout<<endl;
            
        }
    }
    
    return 0;
}