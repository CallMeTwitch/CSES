#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(0);

    long long x, y, t;
    cin >> t;

    for (int q=0;q<t;q++) {
        cin >> y >> x;

        if (y > x) {
            if (y & 1) {
                cout << ((y - 1) * (y - 1)) + x << '\n';
            } else {
                cout << (y * y) - x + 1 << '\n';
            }
        } else if (x > y) {
            if (x & 1) {
                cout << (x * x) - y + 1 << '\n';
            } else {
                cout << ((x - 1) * (x - 1)) + y << '\n';
            }
        } else {
            cout << (x * y) - x + 1 << '\n';
        }
    }
}