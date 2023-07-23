#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[t];
    int temp[t];
    for(int i=0;i<t;i++){
        cin >> arr[i];
        temp[i]= arr[i];
    }
    sort(arr,arr+t);
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(temp[i]==arr[j]){
                cout << j << " ";
                break;
            }
        }
    }

    return 0;
}

