#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        vector <int> a(n);
        int b[n];
        int sum=0;
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
            sum=sum+aux;
        }

        sort(a.begin(),a.end());

        if(sum%2==0) {
            cout<<0<<endl; continue;
        }

        else {
            int auxIt=0;
            for(int i=0;i<n;i++) {
                int aux=a[i];
                if(aux%2==1) {
                    while(aux%2!=0) {
                        aux=floor(aux/2);
                        auxIt++;
                    }
                }
                else {
                    while(aux%2!=1) {
                        aux=floor(aux/2);
                        auxIt++;
                    }
                }
                b[i]=auxIt;
                auxIt=0;
            }
        }
        int minVal=INT_MAX;
        for(int i=0;i<n;i++) {
            minVal=min(minVal,b[i]);
        }

        cout<<minVal<<endl;







    }
    return 0;
}

