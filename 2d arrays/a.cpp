#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            a[i][j] = i;
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}