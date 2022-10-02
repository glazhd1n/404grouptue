#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int mx = a[0], mn = a[0];

    for(int i = 0; i < n; i++) {
        if(mx < a[i]) {
            mx = a[i];
        }
        if(mn > a[i]) {
            mn = a[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == mx) {
            a[i] = mn;
        }
        cout << a[i] << ' ';
    }
}