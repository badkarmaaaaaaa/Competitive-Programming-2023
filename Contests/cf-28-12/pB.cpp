#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int a[n];
    int maxAux=-1;
    for(int i=0; i<n;i++) {
        int aux; cin>>aux;
        a[i]=aux;
        if(aux>maxAux) {
            maxAux=aux;
        }
    }

    int AccSum=0;
    for(int i=0; i<n;i++) {
        int auxSum=maxAux-a[i];
        AccSum=AccSum+auxSum;
    }

    cout<<AccSum<<endl;
    return 0;
}

