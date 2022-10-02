#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, d, sum = 0;
    cin >> n >> a >> d;

    for(int i = 0; i < n; i++) {
        cout << a << ' ';
        sum += a;
        a = a + d;
    }
    cout << '\n';
    cout << "sum: " << sum << '\n';
}