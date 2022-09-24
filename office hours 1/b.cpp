#include <bits/stdc++.h>

using namespace std;

int main() {
    float n;
    cin >> n;

    int sum = 0;

    do {
        sum += n;
    } while(n--);

    cout << sum << '\n';
}