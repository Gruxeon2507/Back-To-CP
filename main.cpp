#include<iostream>
#include <cmath>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    int a[100]={0};
    for(int i=0;i<n;i++){
        a[s[i]]++;
    }
    int ans=0;
    for(char i='A';i<='G';i++){
        if(a[i]<m){
            int temp = m-a[i];
            ans+=temp;
        }
    }
    cout << ans << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}