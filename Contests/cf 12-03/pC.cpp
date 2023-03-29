#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long n,x,p; cin>>n>>x>>p;
        bool flag = false;
        int iAns;

        for(long long i=1; i<=p/n + p%n;i++) {
            long long aux = (i*(i+1))/2;
            aux=aux+x;
            //cout<<aux<<endl;

            if(aux%n==0) {
                flag=true;
                iAns=p;
                //cout<<aux<<endl;
                break;
            }
        }

        if(flag) {cout<<"Yes"<<endl;} //cout<<iAns<<endl;}
        else cout<<"No"<<endl;


    }
    
    return 0;
}