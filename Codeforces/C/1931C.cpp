#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int start=1,end=n-2;
    while(a[start]==a[0]&&start<n){
        start++;
    }
    while(a[end]==a[n-1]&&end>=0){
        end--;
    }
    end=n-end-1;
//    cout << start << " " << end << endl;
    if(start==n){
        cout << "0\n";
        return;
    }
    if(a[0]==a[n-1]){
        cout << n-start-end << endl;
    }else{
        cout << n-max(start,end) << endl;
    }
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
