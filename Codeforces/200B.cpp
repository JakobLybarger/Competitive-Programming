#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x,res=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        res += x;
    }
    cout << (double)res / n;
}