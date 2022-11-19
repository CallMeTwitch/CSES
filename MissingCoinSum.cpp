#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const long long t = 2e5+5;
long long mem[t];

int main() {
    long long n;
    cin >> n;

    vector<long long> nums(n);
    for (int q=0;q<n;q++) {
        cin >> nums[q];
    }

    sort(nums.begin(), nums.end());
    mem[0] = 1;

    for (int q=0;q<n;q++) {
        if (mem[q] < nums[q]) {
            cout << mem[q];
            return 0;
        }

        mem[q + 1] = mem[q] + nums[q];
    }

    cout << mem[n];
}