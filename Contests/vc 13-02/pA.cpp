#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;

        int aux = n/3;

        if(n%3==0) {
            for(int i=0; i<aux;i++) {
                cout<<21;
            }
            cout<<endl;
            continue;
        }

        if(n%3==1) {
            cout<<1;
            for(int i=0; i<aux;i++) {
                cout<<21;
            }
            cout<<endl;
            continue;
        }

        if(n%3==2) {
            for(int i=0; i<aux;i++) {
                cout<<21;
            }
            cout<<2<<endl;
            continue;
        }


    }
    
    return 0;
}