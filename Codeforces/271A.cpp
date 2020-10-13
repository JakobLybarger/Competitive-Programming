#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;

    while(true) {
        y++;
        string x = to_string(y);
        bool keep = true;
        for(int j = 0; j < x.length(); j++) {
            for(int k = j+1; k < x.length(); k++) {
                if(x[j] == x[k]) {
                    keep = false;
                }
            }
        }
        if(keep) {
                cout << stoi(x);
                return 0;
            }
    }
}