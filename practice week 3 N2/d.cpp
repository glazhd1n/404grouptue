#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 1; n > 0; i++) {
        if(i % 7 == 0) {
            n += 0;
        } else if (i % 2 == 0) {
            n -= 4;
        } else if (i % 2 != 0) {
            n += 3;
        }

        cnt++;
    }

    cout << cnt << '\n';
}