#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n;i++) {
            cin>>a[i];
        }

        int count=0,aux,it=0;

        for(int i=0; i<n;i++) {
            if(a[i]>(it+1)) {
                aux=a[i]-(it+1);
                count=count+aux;
                it=a[i];
            }
            else {
                it++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}