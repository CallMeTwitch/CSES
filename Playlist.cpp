#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int q=0;q<n;q++) {
        cin >> nums[q];
    }

    int a = 0, b = 0, curr = 0, max = 0;

    map<int, int> freq;
    while (b < n) {
        if (freq.find(nums[b]) == freq.end() || !freq[nums[b]]) {
            freq[nums[b]]++;
            curr++;
            b++;

            if (curr > max) {
                max = curr;
            }
        } else {
            freq[nums[a]]--;
            curr--;
            a++;
        }
    }

    cout << max;
}