#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> total;
vector<char> letras;
/*
void fill( int R,int C){
    int c=0;
    for(int i=0;i<R;i++){
        vector <char> f;
        for(int j=0;i<C;j++){
            cout    <<letras[c];
            f.push_back(letras[c]);
            c++;

        }
        total.push_back(f);
        cout<<endl;
    }
}
 */
void f(string s,int C,char t){
    if(t=='S'){
    for(int i=0;i<s.size();i++){
        for(int j=0;j<letras.size();j++) {
            if (s[i] == letras[j]) {
                cout << (j / C) + 1 << "," << (j % C) + 1;
                break;
            }
        }
        if(i!=s.size()-1){
            cout<<",";
        }
    }}
    if(t=='L'){
        for(int i=0;i<s.size();i++){
            for(int j=letras.size();j>0;j--) {
                if (s[i] == letras[j]) {
                    cout << (j / C) + 1 << "," << (j % C) + 1;
                    break;
                }
            }
            if(i!=s.size()-1){
                cout<<",";
            }
        }}
}
int main() {
    int p, n, R, C;
    char type = 'S';
    cin >> p;
    cin >> n;
    string aux;
    vector<string> l;
    string xml[n];

    scanf("%d,%d", &R, &C);
    cin >> type;

    for (int i = 0; i < p; i++) {
        string a;
        cin>>a;
        l.push_back(a);
    }


    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, xml[i]);
    }
    int c = 0;
    for (int i = 2; i < n - 2; i++) {

        for (int j = 3; j < xml[i].size() - 4; j++) {
            if (c < R * C) {
                if (xml[i][j] == ' ') {
                    letras.push_back('_');
                } else {
                    letras.push_back(xml[i][j]);
                }
            }
            c++;
        }
    }

    for(int i=0;i<p;i++){
        f(l[i],C,type);
        cout<<endl;
    }

    return 0;
}