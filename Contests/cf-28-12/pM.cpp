#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int sumB=0,sumC=0;
    for(int i=0; i<n;i++) {
        int aux; cin>>aux;
        if(aux>0) {
            sumB=sumB+aux;
        }
        else {
            sumC=sumC+aux;
        }
    }

    cout<<sumB-sumC<<endl;
    return 0;

}