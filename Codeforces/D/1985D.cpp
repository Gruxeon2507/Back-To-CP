#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int t=0;
    int max=0;
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<m;j++) {
            if(s[i][j]=='#') count++;
        }
        if(count > max){
            max=count;
            t=i;
        }
    }
    int start,end;
    for(int i=0;i<m;i++){
        if(s[t][i]=='#') {
            start = i;
            break;
        }
    }
    for(int i=0;i<m;i++){
        if(s[t][i]=='#') {
            end = i;
        }
    }
    cout << t + 1 << " " << (start + end)/2 + 1 << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}