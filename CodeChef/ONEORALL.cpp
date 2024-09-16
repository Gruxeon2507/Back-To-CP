#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long arr[n];
    int sum=0;
    long long min =1000000000;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        if(min > arr[i]) min = arr[i];
    }
    if(n%2==1 && sum%2==1) cout << "CHEF" << endl;
    else if(n%2==1 && sum%2==0) cout << "CHEFINA" << endl;
    else if(n%2==0 && min%2==1) cout << "CHEF" << endl;
    else if(n%2==0 && sum%2==1) cout << "CHEF" << endl;
    else if(n%2==0 && sum%2==0) cout << "CHEFINA" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}