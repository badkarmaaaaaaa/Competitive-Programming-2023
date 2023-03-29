 
 
 #include<bits/stdc++.h>
using namespace std;
#define N 32768

int main() {
    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++) {
        int aux; cin>>aux;
        a[i]=aux;
    }

    for(int i=0; i<n;i++) {
        int ans=INT_MAX;
        int number = a[i];
        for(int i=0; i<=15;i++) {
            for(int j=0; j<=15;j++) {
                long long aux = (number+i)*pow(2,j);
                if((aux)%N==0) ans=min(ans,i+j);
            }
        }
        cout<<ans<<" ";
    }
    

    
    cout<<endl;
    return 0;
}