//AND sorting 9:25-9:43
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int p[n];
        vector <int> aux;

        for(int i=0; i<n;i++) {
            cin>>p[i];
            if(p[i]!=i) {
                aux.push_back(p[i]);
            }
        }

        //for(int k=0; k<aux.size();k++) {
        //    cout<<aux[k]<<" ";
        //}
        //cout<<endl;
        
        int ANDaux=aux[0];
        for(int k=1; k<aux.size();k++) {
            ANDaux=ANDaux&aux[k];
        }

        cout<<ANDaux<<endl;
        
    }
    
    return 0;
}