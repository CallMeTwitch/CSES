#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    int output = 0;
    vector<int> nums;
    for (int q=0;q<n;q++) {
        cin >> a;

        b = upper_bound(nums.begin(), nums.end(), a) - nums.begin();
        if (b == output) {
            nums.push_back(a);
            output++;
        } else {
            nums[b] = a;
        }
    }

    cout << output;
}
