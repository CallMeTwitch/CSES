#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
    } else if (n < 4) {
        cout << "NO SOLUTION";
    } else {
        for (int q=2;q<=n;q+=2) {
            cout << q << ' ';
        }

        for (int q=1;q<=n;q+=2) {
            cout << q << ' ';
        }
    }
}