#include<bits/stdc++.h>
using namespace std;
#define N 50009

int main() {
    int t; cin>>t;
    while(t--) {
        int m; cin>>m;
        map <int,int> mp;

        vector <pair<int,int>> v;

        int array[N]={0};
        int cnt=0;

        for(int i=1; i<=m;i++) {
            int n; cin>>n;
            cnt+=i;
            for(int j=1; j<=n;j++) {
                int aux; cin>>aux;
                //cnt+=i;
                array[aux]=cnt;
                mp[aux]=mp[aux]+n;
            }
        }

        for(int i=0; i<N;i++) {
            if(array[i]!=0) v.push_back({array[i],i});
        }



        sort(v.begin(),v.end());

        vector <int> vAns;
        vAns.push_back(v[0].second);
        for(int i=1; i<v.size();i++) {
            if(v[i-1].first!=v[i].first) vAns.push_back(v[i].second);
        }

        if(vAns.size()==m) {
            for(int i=0; i<vAns.size();i++) {
                cout<<vAns[i]<< " ";
            }
            cout<<endl;
        }
        else cout<<-1<<endl;

    }
    
    return 0;
}