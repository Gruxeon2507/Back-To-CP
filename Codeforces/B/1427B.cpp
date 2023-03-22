#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n ;
    vector<int> a;
    int sum=0;
    int a1=0;
    int a0=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        sum+=x;
        if(x%2==0) a0++;
        else a1++;
    }
    if(sum%2==0&&a1==0&&a0%2==0) {
        cout << "YES" << endl;
    }else if(sum%2==0&&a1>=2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}