#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector <int> re;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                re.push_back(a[i]^a[j]);
            }
        }
        sort(re.begin(),re.end());
        cout<<re[re.size()-1]-re[0]<<endl;
    }
    return 0;
}