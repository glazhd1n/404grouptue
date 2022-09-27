#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int a[size];

    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    bool check = false;

    for(int i = 0; i < size; i++) {
        if(a[i] == target) {
            check = true;
            break;
        }
    }

    if(check == true) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}