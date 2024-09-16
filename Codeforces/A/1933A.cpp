#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int sum=0;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        if(t<0) sum-=t;
        else sum+=t;
    }
    cout << sum << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}