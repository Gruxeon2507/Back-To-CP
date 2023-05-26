#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        long long x,a,b,c;
        cin>>x;
        if(x<2){
            cout<<-1<<endl;
        }else if(x<=1000000){
            cout<<1<<" "<<1<<" "<<x-1<<endl;
        }else{
            long long a=1000000;
            long long c=x%a;
            long long b;
            if(c==0){
                b=(x/a)-1;
                c=a;
            }else{
                b=x/a;
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}