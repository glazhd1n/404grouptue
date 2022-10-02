#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a;
        cin >> a;

        int pervie_tri = a / 1000;
        int poslednie_tri = a % 1000;

        int sum1 = (pervie_tri%10) + (pervie_tri/10)%10 + (pervie_tri/100);
        int sum2 = (poslednie_tri%10) + (poslednie_tri/10)%10 + (poslednie_tri/100);
        
        if(sum1 == sum2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}