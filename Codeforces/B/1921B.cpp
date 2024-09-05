#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    int c1=0, c2=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='1'&&s1[i]==s2[i]) continue;
        else{
            if(s1[i]=='1') c1++;
            if(s2[i]=='1') c2++;
        }
    }
    int l,m;
    if(c1<c2) l=c2,m=c1;
    else l=c1,m=c2;
    int ans = l-m;
    cout << ans + m << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}