#include <iostream>
#include <vector>
#define ll long long

using namespace std;


void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a['z'+1]={0};
    for(int i=0;i<n;i++){
        a[s[i]]++;
    }
    int odd=0;
    for(int i=0;i<'z'+1;i++){
        if(a[i]%2==1){
            odd++;
        }
    }
    if(odd>k+1) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}