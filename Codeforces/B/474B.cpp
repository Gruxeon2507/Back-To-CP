#include <bits/stdc++.h>
using namespace std;
int arr[10000001];
void solve() {
    int n;
    cin >> n;
    int m=0;
    for(int i=1;i<=n;i++){
        int temp;
        cin >> temp;
        for(int j=0;j<temp;j++){
            m++;
            arr[m]=i;
        }
    }
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int temp;
        cin >> temp;
        cout << arr[temp] << endl;
    }
}

int main() {
    int t;
//    cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}

