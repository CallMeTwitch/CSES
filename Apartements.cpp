#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int q=0;q<n;q++) {
        cin >> a[q];
    }

    vector<int> b(m);
    for (int q=0;q<m;q++) {
        cin >> b[q];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int output = 0;
    int w = 0;
    for (int q=0;q<n;q++) {
        if (w >= m) {
            break;
        } else if (b[w] - k <= a[q] && a[q] <= b[w] + k) {
            output++;
            w++;
        } else if (b[w] + k < a[q]) {
            w++;
            q--;
        }
    }

    cout << output;
}