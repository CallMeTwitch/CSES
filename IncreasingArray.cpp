#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n;

    long long prev, output = 0;
    for (int q=0;q<n;q++) {
        cin >> t;

        if (q) {
            if (t < prev) {
                output += prev - t;
                t = prev;
            }
        }
        prev = t;
    }

    cout << output;
}