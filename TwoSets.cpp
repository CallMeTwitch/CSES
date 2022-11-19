#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 4 == 0) {
        cout << "YES\n";
        cout << n / 2 << '\n';
        for (int q=0;q<n;q++) {
            if (q % 4 == 0 || q % 4 == 3) {
                cout << q + 1 << ' ';
            }
        }
        cout << '\n' << n / 2 << '\n';
        for (int q=0;q<n;q++) {
            if (q % 4 == 1 || q % 4 == 2) {
                cout << q + 1 << ' ';
            }
        }
    } else if (n % 4 == 3) {
        cout << "YES\n";
        cout << (n / 2) + 1 << '\n';

        cout << 1 << ' '  << 2 << ' ';
        for (int q=4;q<=n;q++) {
            if (q % 4 == 0 || q % 4 == 3) {
                cout << q << ' ';
            }
        }
        cout << '\n' << n / 2 << '\n';
        cout << 3 << ' ';
        for (int q=4;q<=n;q++) {
            if (q % 4 == 1 || q % 4 == 2) {
                cout << q << ' ';
            }
        }
    } else {
        cout << "NO";
    }
}