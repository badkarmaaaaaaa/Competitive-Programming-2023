#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        bool creciente = true;
        int n; cin>>n; int a[n];
        cin>>a[0];
        for(int i=1; i<n;i++) {
            cin>>a[i];
            if(a[i]<=a[i-1]) creciente=false;
        }

        if(n%2==0) {
            cout<<"YES"<<endl;
            continue;
        }
        else {
            if(!creciente) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}