#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> nums;
    vector<char> ch;
    int i=0;
    for(;i<n;i++){
        if(s[i]>='0'&&s[i]<='9'){
            nums.push_back(s[i]);
        }else{
            break;
        }
    }
    for(;i<n;i++){
        if(s[i]>='0'&&s[i]<='9'){
            cout << "NO\n";
            return;
        }else{
            ch.push_back(s[i]);
        }
    }
    vector<char> snums=nums;
    vector<char> sch=ch;
    sort(nums.begin(),nums.end());
    sort(ch.begin(),ch.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=snums[i]){
            cout << "NO\n";
            return;
        }
    }
    for(int j=0;j<sch.size();j++){
        if (ch[j]!=sch[j]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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

