#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    cout << fixed << setprecision(12);
    string s1,s2;
    cin >> s1 >> s2;
    float s1p=0,s1n=0,s2p=0,s2n=0, q=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='+') s1p++;
        if(s1[i]=='-') s1n++;
        if(s2[i]=='+') s2p++;
        if(s2[i]=='-') s2n++;
        if(s2[i]=='?') q++;
    }
    float difp = s1p-s2p;
    float difn = s1n-s2n;
    float ans=0;
    if(difp<0||difn<0||difp+difn!=q) cout << ans << endl;
    else{
        float c =1;
        for(float i=1;i<=q;i++){
            c*=i;
        }
        float p=1,n=1;
        for(float i=1;i<=difp;i++){
            p*=i;
        }for(float i=1;i<=difn;i++){
            n*=i;
        }
        float valid = c/n/p;
        float full=1;
        for(int i=1;i<=q;i++){
            full*=2;
        }
        cout <<  valid/full << endl;
    }
}

int main(){
    int t=1;
//    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}