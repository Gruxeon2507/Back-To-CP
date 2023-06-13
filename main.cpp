#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin >> n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   int l=0;
   for(int i=0;i<n-1;i++){
       if(a[i]<a[i+1]){
           l=i;
           break;
       }
   }
   int r=l+1;
   for(int i=r;i<n;i--){
       if(a[i]<a[i-1]){
           r=i;
           break;
       }
   }
   if(n==1){
       cout << "YES\n";
       cout << "1 1\n";
       return;
   }
    reverse(a.begin()+l,a.begin()+r);
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout <<"YES\n";
    cout << l+1 <<" " << r <<endl;
    return;

}
int main() {
    int t;
//    std::cin >> t;
    t=1;
    while (t--) {
        solve();
    }

    return 0;
}

