#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,c[5]={0};
    cin >> n;
    while(n--) {
        cin >> a;
        c[a] += 1;
    }
    int t = c[4] + c[3] + c[2] / 2;
    c[1] -= c[3];
    if(c[2] % 2 == 1) {
        t += 1;
        c[1] -= 2;
    }
    if(c[1] > 0) {
        t += (c[1] + 3) / 4;
    }
    cout << t;
}