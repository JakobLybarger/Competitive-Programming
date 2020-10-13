#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n, a, b;
    cin >> s >> n;
    vector<pair<int,int>> v;
    while(n--) {
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        if(s > v[i].first) {
            s += v[i].second;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}