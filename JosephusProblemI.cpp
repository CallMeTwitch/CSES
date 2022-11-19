#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1, b = 0;
    while (n) {
        for (int q=2;q<=n;q+=2) {
            cout << a * q + b << ' ';
        }

        if (n & 1) {
            cout << a + b << ' ';
            b += a;
        } else {
            b -= a;
        }

        a <<= 1;
        n >>= 1;
    }
}