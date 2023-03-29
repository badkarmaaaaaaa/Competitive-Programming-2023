#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin>>n>>k; // k juegos necesarios

    int a[n]; 
    for(int i=0; i<n;i++) {
        cin>>a[i]; // 1 si pacheco gana , 0 si benji gana
    }
    
    int longest=-1;
    int aux=0;
    for(int i=0; i<n;i++) {
        if(a[i]==1) {
            aux++;
        }

        if(a[i]==0) {
            longest=max(aux,longest);
            aux=0;
        }
    }

    longest=max(aux,longest);

    if(longest>=k) cout<<0<<endl;
    else {
             
    }
    
    return 0;
}