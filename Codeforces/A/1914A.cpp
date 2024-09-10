#include <iostream>
#define ll long long

using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a['Z'+1]={0};
    for(int i=0;i<n;i++){
        a[s[i]]++;
    }
    int ans=0;
    for(int i='A';i<='Z';i++){
        if(a[i]>=i-'A'+1){
            ans++;
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