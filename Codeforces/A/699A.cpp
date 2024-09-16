#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int dp[n+1][4];
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<4;j++){
            dp[i][j]=0;
        }
    }
//    for(int i=1;i<=n;i++){
//        for(int j=0;j<3;j++){
//            cout << dp[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
//            cout << dp[i][0] << endl;
        }
        if(a[i]==1||a[i]==3){
            dp[i][1]=max({dp[i-1][0]+1,dp[i-1][2]+1,dp[i-1][1]});
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
//            cout << dp[i][1] << endl;
        }
        if(a[i]==2||a[i]==3){
            dp[i][2]=max({dp[i-1][0]+1,dp[i-1][1]+1,dp[i-1][2]});
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
//            cout << dp[i][2] << endl;
        }
    }
//    for(int i=1;i<=n;i++){
//        for(int j=0;j<3;j++){
//            cout << dp[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << dp[n][0] << " " << dp[n][1] << " " << dp[n][2] << endl;
    int mx = max({dp[n][0],dp[n][1],dp[n][2]});
    cout << n-mx << endl;
}

int main(){
    int t=1;
//    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

//3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1 0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 0 3 3 3 3 3 1 0 2 1 3 3 0 2 3 3