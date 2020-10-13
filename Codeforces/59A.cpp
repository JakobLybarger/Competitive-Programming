#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int a=0,b=0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] < 91) {
            ++a;
        }
        else {
            ++b;
        }
    }

    if (a > b) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;
}