iconv -f utf-8 -t ascii//translit input.c > output.c
#include <bits/stdc++.h>
using namespace std;
char memo[3][3]={{' ','o',' '},{'/','|','\\'},{'<',' ','\\'}};

map <string, int> say;
char pierna_d[2]={'<','/'};
char pierna_i[2]={'>','\\'};
char brazo_d[3]={'(','<','/'};
char brazo_i[3]={')','>','\\'};

void dibujar(int b1,int b2, int p1, int p2){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<memo[i][j];
        }
        cout<<endl;
    }
}
int main() {
    say["left hand to head"]=1;
    say["left hand to hip"]=2;
    say["left hand to start"]=3;
    say["left leg in"]=4;
    say["left leg out"]=5;
    say["right hand to head"]=6;
    say["right hand to hip"]=7;
    say["right hand to start"]=8;
    say["right leg in"]=9;
    say["right leg out"]=10;
    say["turn"]=11;
    int t;cin>>t;
    while(t--){
        int d;cin>>d;
        while(d--){
            string a;
            getline(cin,a);
            cin.ignore();
            if (a[0]=='s') {
                for(int i=3;i<a.size();i++){
                    cout<<a[i];
                }
            }
        }
    }
    return 0;
};