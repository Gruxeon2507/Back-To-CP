#include <iostream>
#define ll long long

using namespace std;


void solve() {
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    int t = sum/n;
    int p =0;
    for(int i=0;i<n;i++){
        if(a[i]>t){
            p=p+a[i]-t;
        }
        if(a[i]<t){
            if(t-a[i]<=p){
                p = p - t + a[i];
            }else{
                cout << "NO\n";
                return;
            }
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