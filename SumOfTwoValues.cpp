#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, t;
    cin >> n >> k;

    vector<pair<int, int>> nums;
    for (int q=0;q<n;q++) {
        cin >> t;
        nums.push_back({t, q + 1});
    }

    sort(nums.begin(), nums.end());

    int a = 0, b = n - 1;
    while (a < b) {
        if (nums[a].first + nums[b].first > k) {
            b--;
        } else if (nums[a].first + nums[b].first < k) {
            a++;
        } else {
            cout << nums[a].second << ' ' << nums[b].second;
            return 0;
        }
    }

    cout << "IMPOSSIBLE";
}