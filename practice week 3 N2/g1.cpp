#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string s1 = s;
    reverse(s.begin(), s.end());

    if(s == s1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}