#include <bits/stdc++.h>
using namespace std;

int main() {
    string f, s;
    cin >> f >> s;
    
    for (int i = 0; i < f.length(); i++) {
        f[i] = tolower(f[i]);
        s[i] = tolower(s[i]);
    }

    if (f == s) {
        cout << "0";
    }
    else if (f > s){
        cout << "1";        
    }
    else if( f < s) {
        cout << "-1";
    }

    return 0;
}