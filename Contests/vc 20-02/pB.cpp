#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n]; int count=0;
        map <int, int> m ;
        bool flagRep=false;

        for(int i=0; i<n;i++) {
            cin>>a[i];
            if(m[a[i]]) {
                m[a[i]]++;
                flagRep=true; //flagRep=true : Hay elementos repetidos.
            }
            else {
                m[a[i]]=1;
                count++;
            }
        }

        int countAux=0;
        for(int i=1; i<n;i++) {
            if(a[i]==a[i-1]) {
                countAux++;
            }
        }

        if(!flagRep or (n-count)==countAux) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

        

        

    }
    
    return 0;
}