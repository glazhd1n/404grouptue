#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a;
        cin >> a;

        if(a <= 1399) {
            cout << "Division 4\n";
        } else if (1400 <= a && a <= 1599) {
            cout << "Division 3\n";
        } else if(1600 <= a && a <= 1899) {
            cout << "Division 2\n";
        } else {
            cout << "Division 1\n";
        }
    }
    return 0;
}