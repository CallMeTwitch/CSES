#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void solve(int a, int b, int c, int n) {
    if (n) {
        solve(a, c, b, n - 1);
        cout << a << ' ' << c << '\n';
        solve(b, a, c, n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    cout << (1 << n) - 1 << '\n';

    solve(1, 2, 3, n);
}