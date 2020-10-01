#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    set<char> se;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        se.insert(s[i]);
    }
    if (se.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0;
}