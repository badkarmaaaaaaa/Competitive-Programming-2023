#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];

        bool condition=true;
        int evenIneven=0, oddInodd=0, res=0;

        for(int i=0; i<n;i++) {
            cin>>a[i];
        }

        for(int i=0; i<n;i++) {
            if((i+1)%2==1 && a[i]%2==1) {
                oddInodd++;
                continue;
            }

            if(((i+1)%2==0 && a[i]%2==0)) {
                evenIneven++;
                continue;
            }

        }

        res=n-evenIneven-oddInodd;
        
        for(int i=0; i<n;i++) {
            if(a[i]%2==0 && a[i]%2==0)

        }

    }
    
    return 0;
}