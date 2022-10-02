#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x -= a;
        y -= b;

        if(x <= 0 && y <= 0) {
            cout << "YES\n";
        } else if(x <= 0) {
            if(c >= y) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if(y <= 0) {
            if(c >= x) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            if(x + y <= c) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}