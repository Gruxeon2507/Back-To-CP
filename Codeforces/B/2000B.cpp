#include <iostream>
#include <vector>
#define ll long long

using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> seat(n,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i]--;
    }
    seat[a[0]]=1;
    for(int i=1;i<n;i++){
        seat[a[i]]=1;
        bool check=false;
        if(a[i]-1>=0&&seat[a[i]-1]!=0){
            check=true;
        }
        if(a[i]+1<n&&seat[a[i]+1]!=0){
            check=true;
        }
        if(!check){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}