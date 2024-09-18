#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum=0,neg=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<0){
            arr[i]=-arr[i];
            neg++;
        }
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    if(neg%2==1){
        sum-=2*arr[0];
    }
    cout << sum << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

