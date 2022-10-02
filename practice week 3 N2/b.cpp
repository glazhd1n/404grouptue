#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    a = a * d;
    b = b * e;
    c = c * f;

    int z = a + b + c;

    
    if(g - z >= 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}