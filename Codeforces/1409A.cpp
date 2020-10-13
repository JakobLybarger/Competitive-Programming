#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c=0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << (abs(a-b)+9)/10 << endl;
    }
}