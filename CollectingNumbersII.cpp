#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;

    int c = 0;
    vector<int> ind(n + 1), nums(n + 1);
    for (int q=0;q<n;q++) {
        cin >> a;

        nums[q + 1] = a;
        ind[a] = q + 1;

        c += (ind[a - 1] == 0);
    }

    int r, s;
    while (m--) {
		cin >> a >> b;
		r = nums[a], s = nums[b];

		swap(nums[a], nums[b]);
        
		if (ind[r - 1] <= ind[r] && ind[r - 1] > b) c++;
		if (ind[r - 1] > ind[r] && ind[r - 1] <= b) c--;
		if (ind[r] <= ind[r + 1] && b > ind[r + 1]) c++;
		if (ind[r] > ind[r + 1] && b <= ind[r + 1]) c--;		
		ind[r] = b;

		if (ind[s - 1] <= ind[s] && ind[s - 1] > a) c++;
		if (ind[s - 1] > ind[s] && ind[s - 1] <= a) c--;
		if (ind[s] <= ind[s + 1] && a > ind[s + 1]) c++;
		if (ind[s] > ind[s + 1] && a <= ind[s + 1]) c--;	
		ind[s] = a;

		cout << c << '\n';
    }
}