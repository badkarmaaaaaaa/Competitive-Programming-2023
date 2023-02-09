#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int m,s;cin>>m>>s; //m:number of foun elements s:sum of forgotten numbers
        int a[m];
        for(int i=0;i<m;i++) {
            int aux;cin>>aux;
            a[i]=aux;
        }
        int sum=0,max=0;
        for(int i=0;i<m;i++) {
            if(a[i] >= max){
                max = a[i];
            }
            sum=sum+a[i];
        }
        int sumMax = max*(max+1)/2;
        int sumAux=s-sumMax+sum;
        int j=max;
        while(sumAux>0) {
            j=j+1;
            sumAux=sumAux-j;
            //cout<<sumAux<<" ";
        }
        if(sumAux==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

    return 0;
}