#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int ch[26]={0};
    for(int i=0;i<n;i++){
        cin >> a[i];
        for(int j=0;j<26;j++){
            if(ch[j]==a[i]){
                cout << char(j+'a');
                ch[j]++;
                break;
            }
        }
    }
    cout << endl;

}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}