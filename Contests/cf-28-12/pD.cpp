#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    bool foundFlag=false;
    vector <int> aResult;

    int aN[n]; 
    for(int i=0; i<n;i++) {
        int aux; cin>>aux;
        aN[i]=aux;
    }

    int aM[m]; 
    for(int i=0; i<m;i++) {
        int aux; cin>>aux;
        aM[i]=aux;
    }

    int indx=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(aN[i]==aM[j]) {
                aResult.push_back(aM[j]);

            }
        }
    }

    if(foundFlag) {
        cout<<endl;
    }
    else {
        for(int i=0; i<aResult.size();i++) {
            cout<<aResult[i]<<" ";
        }
        cout<<endl;
    }



}

