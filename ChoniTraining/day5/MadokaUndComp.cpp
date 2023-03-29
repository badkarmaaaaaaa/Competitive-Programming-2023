#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k,r,c; cin>>n>>k>>r>>c;

        int rAux= (r-1)%k,cAux=(c-1)%k;
        char matrix[k][k];
        for(int j=0;j<k;j++) {
            for(int i=0; i<k;i++) {
                matrix[i][j]='.';
            }
        }
        matrix[cAux][rAux]='X';
        

        for(int j=0;j<k;j++) {
            if(j!=rAux-1) {
                for(int i=0;i<k;i++) {
                    if(i!=cAux-1) {
                        matrix[i][j]='.';
                    }
                }
            }
            
        }

        for(int i=0; i<k;i++) {
            int ColIndex=(cAux+i)%k;
            int RowIndex=(rAux+i)%k;
            matrix[ColIndex][RowIndex]='X';
        }

        for(int w=0; w<n/k;w++) {
            for(int j=0;j<k;j++) {
                for(int q=0; q<n/k;q++) {
                    for(int i=0; i<k;i++) {
                        cout<<matrix[i][j];
                    }
                }
                
                cout<<endl;
            }
        }


    }
    
    return 0;
}