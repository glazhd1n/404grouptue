#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], a1[2 * n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        a1[i] = a[i];
        a1[i + n] = a[i];
    }

    for(int i = 0; i < 2 * n; i++) {
        cout << a1[i] << ' ';
    }
}