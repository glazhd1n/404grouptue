#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int a[size];

    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }

    int mx = a[0], mx_pos = 1;

    for(int i = 0; i < size; i++) {
        if(a[i] > mx) {
            mx = a[i];
            mx_pos = i + 1;
        }
    }


    cout << mx_pos << '\n';
}