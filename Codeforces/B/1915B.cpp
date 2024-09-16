#include<iostream>
using namespace std;

void solve(){
    int n=3;
    string s[n];
    int x,y;
    for(int i=0;i<n;i++){
        cin >> s[i];
        for(int j=0;j<n;j++){
            if(s[i][j]=='?'){
                x=i;
                y=j;
            }
        }
    }
    int a[100]={0};

    for(int i=0;i<3;i++){
        if(s[x][i]=='A'){
            a['A']++;
        }
        if(s[x][i]=='B'){
            a['B']++;
        }
        if(s[x][i]=='C'){
            a['C']++;
        }
    }
    if(a['A']!=1) cout << 'A' << endl;
    if(a['B']!=1) cout << 'B' << endl;
    if(a['C']!=1) cout << 'C' << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}