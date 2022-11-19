#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int q=0;q<n;q++) {
        cin >> nums[q];
    }

    sort(nums.begin(), nums.end());

    int output = 1;
    for (int q=1;q<n;q++) {
        output += (nums[q] != nums[q - 1]);
    }

    cout << output;
}