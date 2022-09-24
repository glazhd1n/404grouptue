#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max = -10000000;

    for(int i = 0; i < n; i++) {
        int g;
        cin >> g;

        if (max < g) {
            max = g;
        }
    }

    cout << max << '\n';
}