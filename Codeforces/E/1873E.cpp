#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#define ll long long
using namespace std;

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll low=0, high=2e9;
    while (low<high){
        ll mid = low+(high-low+1)/2;
        ll total = 0;
        for(int i=0;i<n;i++){
            if(mid-a[i]>0){
                total+=(mid-a[i]);
            }
        }
        if(total<=x){low=mid;}
        else {high=mid-1;}
    }
    cout << low << endl;

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

