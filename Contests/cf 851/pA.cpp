#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n],aux[n];
        int TwoCounter=0;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            if(a[i]==2) TwoCounter++;
            aux[i]=TwoCounter;
        }

        if(TwoCounter%2==1) {
            cout<<-1<<endl;
        }
        else {
            for(int i=0; i<n;i++) {
                if(aux[i]==TwoCounter/2) {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}