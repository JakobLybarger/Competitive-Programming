#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, res="";
    int c1=0, c2=0, c3=0;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            ++c1;
        }
        else if(s[i] == '2') {
            ++c2;
        }
        else if(s[i] == '3') {
            ++c3;
        }
    }
    for(int i = 0; i < c1; i++) {
        res+="1";
        if((c2==0 && c3==0) && i==c1-1) {}
        else {
            res+="+";
        }
    }
    for(int i = 0; i < c2; i++) {
        res+="2";
        if(i==c2-1 && c3==0) {}
        else {
            res+="+";
        }
    }
    for(int i = 0; i < c3; i++) {
        res+="3";
        if(i==c3-1) {}
        else {
            res+="+";
        }
    }
    cout << res;
}