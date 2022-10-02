#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if(c - (x - a) * ((x - a) > 0) - (y - b) * ((y - b) > 0) > 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}