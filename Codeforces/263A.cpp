#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    int x, y, in, res=0;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> in;
            matrix[i][j] = in;
            if (in == 1) {
                x = j;
                y = i;
            }
        }
    }
    while (x != 2 || y != 2) {
        if (x > 2) {
            --x;
            ++res;
        }
        else if (x < 2) {
            ++x;
            ++res;
        }

        if (y > 2) {
            --y;
            ++res;
        }
        else if(y < 2) {
            ++y;
            ++res;
        }
    }
    cout << res;
    return 0;
}