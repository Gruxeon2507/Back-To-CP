#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x=0;
    int t=0;
    for(int i=2;i<=n;i++){
        int sum = 0;
        int k=1;
        while(i*k<=n){
            sum = sum + k*i;
            k++;
        }
        if(sum>=t){
            x=i;
            t=sum;
        }
    }
    cout << x  << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}