#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    cin >> n;
    string s;
    cin >>s;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[s[i]-'A']==0) {
            sum += 2;
            arr[s[i] - 'A']++;
        }
        else {
            sum++;
            arr[s[i]-'A']++;
        }
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin>>t;
//    t=1;
    while(t--){
        solve();
    }
    return 0;
}

