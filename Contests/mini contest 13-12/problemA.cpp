#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n],b[n];
        int count=0, aOnes=0,bOnes=0;

        for(int i=0;i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
            if(aux==1) aOnes++;
        }

        for(int i=0;i<n;i++) {
            int aux; cin>>aux;
            b[i]=aux;
            if(aux==1) bOnes++;
            if(a[i]==b[i]) count++;
        }
        
        int changes=n-count;
        int auxChanges=1 + abs(aOnes-bOnes);
        changes= min(changes,auxChanges);

        cout<<changes<<endl;
        
    }
        
    return 0;
}

