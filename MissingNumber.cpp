#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, t, sum = 0;
    cin >> n;

    for (int q=0;q<(n-1);q++) {
        cin >> t;

        sum += t;
    }

    cout << (n * (n + 1) / 2) - sum;
}