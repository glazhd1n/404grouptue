#include <bits/stdc++.h>

int main() {
    int n;
    cin >> n;

    int Kasym = 1;

    for(int i = 1; i <= n; i++) {
        Kasym *= i;
    }

    cout << Kasym << '\n';
}
