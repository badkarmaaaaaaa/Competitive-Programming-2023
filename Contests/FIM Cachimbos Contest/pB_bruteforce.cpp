#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin>>n>>k; // k juegos necesarios

    int a[n]; 
    for(int i=0; i<n;i++) {
        cin>>a[i];
        //cout<<"hola"<<endl; // 1 si pacheco gana , 0 si benji gana
    }
    
    int ans=20000;

    for(int i=0; i<=n-k;i++) {
        int count=0;
        for(int j=0; j<k;j++) {
            if(a[i+j]==0) {
                count++;
            }
        }
        ans=min(ans,count);
        //cout<<"hola"<<endl;

    }


    cout<<ans<<endl;
    
    return 0;
}