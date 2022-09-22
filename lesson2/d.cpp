#include <bits/stdc++.h>

using namespace std;

int main() {
    float n, k;
    cin >> n >> k;

    int time = ceil(n * 2 / k);

    if(time == 1) {
        time = 2;
    }

    cout << time << '\n';
}