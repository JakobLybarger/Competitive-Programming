#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;

    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if (s.compare("++X") == 0 || s.compare("X++") == 0) {
            ++res;
        }
        else if (s.compare("--X") == 0 || s.compare("X--") == 0) {
            --res;
        }
    }

    cout << res;

    return 0;
}