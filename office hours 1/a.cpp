#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <string>
#include <queue>
#include <deque>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << "None\n";
    } else if(n % 2 != 0) {
        cout << "Odd\n";
    } else {
        cout << "Even\n";
    }
}