#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> s;

    bool flag = false;
    int l = 0, r = s.size() - 1;
    while(l < r) {
        if(s[l] != s[r]){
            cout << "NO\n";
            flag = true;
            break;
        }
        l++;
        r--;
    }

    if(flag == false) {
        cout << "YES\n";
    }



}