#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    unsigned long long int temp=1;
    unsigned long long int count=0;
    while(temp<=n){
        count++;
        temp*=2;
    }
    unsigned long long int sum=0;
    temp = n;
    for(int i=count;i>=0;i--){
        sum+=temp;
        temp=temp/2;
    }
    cout << sum << endl;
}
int main() {
    int t;
    std::cin >> t;
//    t=1;
    while (t--) {
        solve();
    }

    return 0;
}

 