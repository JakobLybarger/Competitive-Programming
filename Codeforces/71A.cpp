#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<string> words;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() > 10) {
            cout << words[i][0] << words[i].length()-2 << words[i][words[i].length()-1] << endl;
        }
        else {
            cout << words[i] << endl;
        }
    }
}