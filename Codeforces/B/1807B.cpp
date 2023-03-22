#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >>n;
    int arr[n];
    int m=0;
    int b=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0) m+=arr[i];
        else b+=arr[i];
    }
    if(m<=b){
        cout << "NO" << endl;
    }else{
        cout << "YES" <<endl;
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