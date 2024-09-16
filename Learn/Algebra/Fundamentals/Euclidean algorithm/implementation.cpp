#include <bits/stdc++.h>
using namespace std;
long long recursive(long long a, long long b){
    if(b==0) return a;
    else return recursive(b,a%b);
}

long long loop(long long a,long long b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}