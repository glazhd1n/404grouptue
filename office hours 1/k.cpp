#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i * i > n) {
            break;
        } else {
            cout << i * i << '\n';
        }
    }
}