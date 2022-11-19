#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

long long median(vector<long long> nums) {
    if (nums.size() & 1) {
        return nums[nums.size() / 2];
    } else {
        return (nums[(nums.size() / 2) - 1] + nums[nums.size() / 2]) / 2;
    }
}

int main() {
    long long n;
    cin >> n;

    vector<long long> sticks(n);
    for (int q=0;q<n;q++) {
        cin >> sticks[q];
    }

    sort(sticks.begin(), sticks.end());

    long long m = median(sticks);
    long long output = 0;
    for (int q=0;q<n;q++) {
        output += abs(sticks[q] - m);
    }

    cout << output;
}