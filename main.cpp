#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        int minOnes;
        if (n % k == 0) {
            minOnes =ceil( n / k);
        } else {
            if(n%2==0)            minOnes = ceil( n / k) ;
            else{
                minOnes = ceil( n / k) + 1;

            }

        }

        std::cout << minOnes << std::endl;
    }

    return 0;
}
