#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin>>n>>k;

    vector <int> aProblems;

    for(int i=0; i<n;i++) {
        int aux; cin>>aux;
        aProblems.push_back(aux);
    }
    int count=0;
    while(n--) {
        if(aProblems[0]>k && aProblems[aProblems.size()-1]>k ) {
            break;
        }
        else {
            if(aProblems[0]<=k) {
                count++;
                aProblems.erase(aProblems.begin());
                continue;
            }
            if(aProblems[aProblems.size()-1]<=k) {
                count++;
                aProblems.pop_back();
                continue;
            }

        }

    }


    cout<<count<<endl;
    return 0;

}