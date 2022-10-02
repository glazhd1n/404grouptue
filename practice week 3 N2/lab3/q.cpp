#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int p = sqrt(n) + 1;
    bool isPrime = true;
    for(int i = 2; i < p; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}