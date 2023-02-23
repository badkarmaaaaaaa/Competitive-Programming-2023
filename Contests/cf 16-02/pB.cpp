#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;
        int leftPointers[n], rightPointers[n];

        int auxArray[60] = {0};

        int countK=0;
        int countNoK=0;
        bool conditionExceptional = false;

        for(int i=0; i<n;i++) {
            cin>>leftPointers[i];
            cin>>rightPointers[i];

            if(leftPointers[i]==k && rightPointers[i]==k) {
                conditionExceptional=true;
            }

            if(leftPointers[i]>k or rightPointers[i]<k) {
                countNoK++;
            }


            for(int k=leftPointers[i];k<=rightPointers[i];k++) {
                auxArray[k]++;
            }
        }

        int auxArrayK= auxArray[k];
        auxArray[k]=-1;

        sort(auxArray,auxArray+60);

        if(auxArray[59]<auxArrayK) {
            cout<<"YES"<<endl;
        }
        else {
            if(conditionExceptional) {
                cout<<"YES"<<endl;
            }
            else {
                for(int i=0; i<n;i++) {
                    if(leftPointers[i]<= )
                }
            }
        }


        
    }
    
    return 0;
}