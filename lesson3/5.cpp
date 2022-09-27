#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int a[size];

    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }

    long long sum = 0;

    for(int i = 0; i < size; i++) {
        sum += a[i];
    }

    cout << sum << '\n';
}