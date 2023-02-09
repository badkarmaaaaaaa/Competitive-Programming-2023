#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
        }
        sort(a,a+n);

        if(a[0]==1 and n==1) {
            cout<<"YES"<<endl;
            continue;
        }
        if(n==1) {
            cout<<"NO"<<endl;
            continue;
        }

        int maxVal=a[n-1];
        int secmaxVal=a[n-2];
                
            if(maxVal-secmaxVal>1) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
            


        


        
    }

    return 0;
}
