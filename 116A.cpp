#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, in, out, cur = 0, l = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> out >> in;
        cur += in;
        cur -= out;
        l = max(cur, l);
    }
    cout << l;
    return 0;
}