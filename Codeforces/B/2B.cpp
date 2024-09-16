#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int d,time;
    cin >> d >> time;
    int total=0;
    vector<int> a(d),b(d),ans;
    int mn=0,mx=0;
    for(int i=0;i<d;i++){
        cin >> a[i] >> b[i];
        mn+=a[i];
        mx+=b[i];
        ans.push_back(a[i]);
        total+=a[i];
    }
    if(mn<=time && time<=mx){
        cout <<"YES\n";
        if(total<time){
            int need = time-total;
            for(int i=0;i<d;i++){
                int dif=b[i]-a[i];
                if(dif<need){
                    need-=dif;
                    a[i]=b[i];
                }else{
                    a[i]+=need;
                    break;
                }
            }
        }
        for(int i=0;i<d;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }else{
        cout << "NO\n";
    }
}
#undef int;
int main() {
    int t=1;
//    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}