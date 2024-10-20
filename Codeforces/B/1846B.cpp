#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>
#define ll long long
using namespace std;

void solve() {
    vector<string> arr(3);
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }
    for(int i=0;i<3;i++){
        if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2]&&arr[i][0]!='.'){
            cout << arr[i][0] << endl;
            return;
        }
        if(arr[0][i]==arr[1][i]&&arr[0][i]==arr[2][i]&&arr[0][i]!='.'){
            cout << arr[0][i] << endl;
            return;
        }
    }
    if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]!='.'){
        cout << arr[0][0] << endl;
        return;
    }
    if(arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[2][0]!='.'){
        cout << arr[0][2] << endl;
        return;
    }
    cout << "DRAW" << endl;
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

