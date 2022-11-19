#include <unordered_set>
#include <unordered_map>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (long long q=1;q<=n;q++) {
        cout << (q * q) * ((q * q) - 1) / 2 - 4 * (q - 1) * (q - 2) << '\n';
    }
}