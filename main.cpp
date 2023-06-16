#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,t;
   cin >> n >> t;
   if(n==1&&t==10){
       cout << -1 << endl;
       return;
   }

   if(t==10){
       cout << 1;
       for(int i=0;i<n-1;i++){
           cout << 0;
       }
       cout << endl;
       return;
   }
   else{
       for(int i=0;i<n;i++){
           cout <<  t;
       }
       cout << endl;
   }

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

