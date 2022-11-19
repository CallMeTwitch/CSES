#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool alg(const pair<int, int> &a, pair<int, int> &b) {
    return (a.second < b.second);
}

int main() {
    int n, a, b;
    cin >> n;

    vector<pair<int, int>> times;
    for (int q=0;q<n;q++) {
        cin >> a >> b;
        times.push_back({a, b});
    }

    sort(times.begin(), times.end(), alg);

    int output = 1;
    int end = times[0].second;
    for (int q=1;q<n;q++) {
        if (times[q].first >= end) {
            output++;
            end = times[q].second;
        }
    }

    cout << output;
}