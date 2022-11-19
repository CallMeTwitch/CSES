#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Light {
    int prev, next;
    int pos;
};

int main() {
	int street_len, light_num, t;

	cin >> street_len >> light_num;
	vector<pair<int, int>> sorted_lights(light_num);
    for (int q=0;q<light_num;q++) {
        cin >> t;
        sorted_lights[q] = {t, q};
    }

	sort(sorted_lights.begin(), sorted_lights.end());

	vector<int> new_pos(light_num);
    for (int q=0;q<light_num;q++) {
        new_pos[sorted_lights[q].second] = q;
    }

	vector<Light> light_ll(light_num + 2);
	light_ll[0] = {-1, 1, 0};
	light_ll[light_num + 1] = {light_num, -1, street_len};
    for (int q=0;q<light_num;q++) {
        light_ll[q + 1] = {q, q + 2, sorted_lights[q].first};
    }
	
	int max_gap = 0;
	vector<int> gaps(light_num);
    for (int q=0;q<=light_num;q++) {
        max_gap = max(max_gap, light_ll[q + 1].pos - light_ll[q].pos);
    }
	gaps.back() = max_gap;

    for (int q=light_num-1;q;q--) {
        Light temp = light_ll[new_pos[q] + 1];
        Light &left = light_ll[temp.prev];
        Light &right = light_ll[temp.next];

        left.next = temp.next;
        right.prev = temp.prev;

		max_gap = max(max_gap, right.pos - left.pos);
		gaps[q - 1] = max_gap;
    }

    for (int q=0;q<light_num;q++) {
        cout << gaps[q] << ' ';
    }
}