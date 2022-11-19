#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    vector<pair<int, int>> times;
    for (int q=0;q<n;q++) {
        cin >> a >> b;

        times.push_back({a, 1});
        times.push_back({b, -1});
    }

    sort(times.begin(), times.end());

    int curr = 0, max = 0;
    for (auto t:times) {
        curr += t.second;
        if (curr > max) {
            max = curr;
        }
    }

    cout << max;
}