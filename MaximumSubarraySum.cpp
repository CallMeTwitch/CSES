#include <iostream>

using namespace std;

int main() {
    long long n, t;
    cin >> n;

    long long curr; cin >> curr;
    long long max = curr;

    for (int q=1;q<n;q++) {
        cin >> t;
        if (curr > 0) {
            curr += t;
        } else {
            curr = t;
        }

        if (curr > max) {
            max = curr;
        }
    } 

    cout << max;
}