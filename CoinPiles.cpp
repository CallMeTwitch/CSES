#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    for (int q=0;q<n;q++) {
        cin >> a >> b;
        if ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)) {
            cout << "YES\n";
        } else cout << "NO\n";
    }
}