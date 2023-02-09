#include<bits/stdc++.h>
using namespace std;

int fb[1005];
bool fbAux[10005];

int fib(int x){
    if (fb[x]!=-1) {
        return fb[x];
    }

    if(x==1 or x==0) {
        fb[x]=1;
        return fb[x];
    }
    fb[x] = fib(x-1) + fib(x-2);
    return fb[x];
}

void fibAux() {
    for(int i=1; i<1005;i++) {
        if(fb[i]!=-1) {
            fbAux[fb[i]]=true;
        }
    }
}

int main() {
    for (int i=0; i<10005;i++) {
        fbAux[i]=false;
    }
    for (int i=0; i<1005;  i++) {
        fb[i]=-1;
    }

    fib(19);
    fibAux();

    int n; cin>>n;
    for(int i=1;i<=n;i++) {
        if(fbAux[i]) {
            cout<<"O";
        }
        else {
            cout<<"o";
        }
    }

    cout<<endl;
    return 0;

}