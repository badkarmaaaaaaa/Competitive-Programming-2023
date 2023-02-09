#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            int aux;cin>>aux;
            a[i]=aux;
        }
        int max=0,secondMax=0;
        for(int i = 0;i<n;i++){
            if(a[i] >= max){
                secondMax = max;
                max = a[i];
            } else if (a[i] > secondMax && a[i] < max){
                secondMax = a[i];
            }
        }

        for(int i=0;i<n;i++) {
            if(a[i]==max) a[i]=a[i]-secondMax;
            else {
                a[i]=a[i]-max;
            }
        }

        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
    }

