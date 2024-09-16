#include <bits/stdc++.h>
using namespace std;
double cacl(double ax,double ay, double bx, double by){
    return sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
}
void solve() {
    double px,py,ax,ay,bx,by;
    cin >> px >> py >> ax >> ay >> bx >> by;
    double case1=max(cacl(0,0,ax,ay),cacl(px,py,ax,ay));
    double case2=max(cacl(0,0,bx,by),cacl(px,py,bx,by));
    double case3=max({cacl(ax,ay,0,0),cacl(bx,by,px,py),cacl(ax,ay,bx,by)/2});
    double case4=max({cacl(ax,ay,px,py),cacl(bx,by,0,0),cacl(ax,ay,bx,by)/2});
    double ans = min({case1,case2,case3,case4});
    printf("%.10lf\n",ans);
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}