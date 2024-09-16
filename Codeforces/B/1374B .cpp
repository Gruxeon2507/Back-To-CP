#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long count2=0;
    long count3=0;
    long ans=0;
    while(n%2==0){
        count2++;
        n/=2;
    }
    while(n%3==0){
        count3++;
        n/=3;
    }
    if(n==1){
        if(count3>=count2){
            cout << count3*2-count2 <<endl;
        }else cout << "-1"<<endl;
    }else cout << "-1" <<endl;

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}