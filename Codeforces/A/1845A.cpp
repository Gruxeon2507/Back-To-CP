#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <string>
#define ll long long
using namespace std;

void solve() {
    int n,k,x;
    cin >> n >> k >> x;
    if(k<=1) {
        cout << "NO\n";
        return;
    }
    if(x==1){
        if(n%2==0){
            cout << "YES" <<endl;
            cout << n/2 << endl;
            for(int i=0;i<n/2;i++){
                cout << 2 << " ";
            }
            cout << endl;
        }else{
            if(k<3){
                cout << "NO\n";
            }else{
                cout << "YES" <<endl;
                cout << n/2 << endl;
                for(int i=0;i<n/2-1;i++){
                    cout << 2 << " ";
                }
                cout << 3;
                cout << endl;
            }
        }
    }else{
        cout << "YES" <<endl;
        cout << n << endl;
        for(int i=0;i<n;i++){
            cout << 1 << " ";
        }
        cout << endl;
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

