#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, a, w=0;
    cin >> n >> h;
    w += n;
    while(n--) {
        cin >> a;
        if (a > h) {
            ++w;
        }
    }
    cout << w;
}