#include <bits/stdc++.h>

using namespace std;

int main(){

    freopen("TONG.INP","r",stdin);
    freopen("TONG.OUT","w",stdout);

    int64_t n,S = 0;
    cin >> n;
    while (n != 0){
        S += n%10;
        n /= 10;
    }

    cout << S;

    return 0;

}
