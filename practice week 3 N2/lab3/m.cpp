#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[100000];
    int sum = 0;
    for(int i = 0; cin >> a[i]; i++) {
        sum += a[i];
    }

    cout << sum << '\n';
}