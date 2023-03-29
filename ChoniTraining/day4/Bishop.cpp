#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        char matrix[8][8];

        for(int i=0; i<8;i++) {
            for(int j=0; j<8;j++) {
                
                cin>>matrix[i][j];
            }
        }


        // for(int i=0; i<8;i++) {
        //     for(int j=0; j<8;j++) {
                
        //         cout<<matrix[i][j];
        //     }
        //     cout<<endl;
        // }

        for(int i=1; i<7;i++) {
            for(int j=1; j<7;j++) {
                
                if(matrix[i-1][j-1]=='#' && matrix[i+1][j-1]=='#' && matrix[i-1][j+1]=='#' && matrix[i+1][j+1]=='#') {
                    cout<< i+1 << " "<<j+1<<endl;
                } 
            }
        }

    }
    
    return 0;
}