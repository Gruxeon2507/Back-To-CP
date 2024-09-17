#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<int> arr;
    while(n>0){
        arr.push_back(n%10);
        n/=10;
    }
    reverse(arr.begin(),arr.end());
    int s=arr.size();
//    for(int i=0;i<s;i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            for(int k=j+1;k<s;k++){
                if((100*arr[i]+10*arr[j]+arr[k])%8==0){
                    cout << "YES\n";
                    cout << 100*arr[i]+10*arr[j]+arr[k] << endl;
                    return;
                }
            }
            if((10*arr[i]+arr[j])%8==0){
                cout << "YES\n";
                cout << 10*arr[i]+arr[j] << endl;
                return;
            }
        }
        if(arr[i]%8==0){
            cout << "YES\n";
            cout << arr[i] << endl;
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
//    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
