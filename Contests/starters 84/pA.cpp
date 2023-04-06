#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,x; cin>>n>>x;
        int cnt=0;

        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            if(aux>=x) cnt++;
        }

        cout<<cnt<<endl;
    }
    
    return 0;
}