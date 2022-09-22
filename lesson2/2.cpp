// WHILE LOOP

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 0;

    while (n < 101) {
        n++;
        if(n % 2 == 0) {
            continue;
        }
        cout << n << '\n';
    }
}