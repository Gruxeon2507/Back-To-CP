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
    int n;
    string s;
    cin >> n >> s;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#') continue;
        else{
            if(s[i]=='.'){
                if(i+1<n&&s[i+1]=='.'){
                    if(i+2<n&&s[i+2]=='.'){
                        ans=2;
                        i=i+2;
                        break;
                    }else{
                        ans+=2;
                        i++;
                    }
                }else{
                    ans+=1;
                    i++;
                }
            }
        }
    }
    cout << ans << endl;
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

