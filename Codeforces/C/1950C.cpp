#include<iostream>
#include <sstream>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int h,m;
    char c;
    istringstream iss(s);
    iss >> h >> c >> m;
    string temp = "AM";
    if(h>=12){
        temp = "PM";
        if(h>12) h=h-12;
    }else{
        if (h==0){
            h=12;
        }
    }
    if(h<10) cout << 0 << h;
    else cout << h;
    cout << c;
    if(m<10) cout << 0 << m;
    else cout << m;
    cout <<  " " << temp << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}