#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    cin >> n;

    for(int i = 0; sum <= 500000; i++){
        sum += n / 100 * 30;
        n += (n / 100 * 10);
        cnt++;
    }
    cout << cnt << '\n';
}