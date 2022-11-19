#include <ext/pb_ds/assoc_container.hpp>
#include <bits/stdc++.h>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
    int n, k;
    cin >> n >> k;
    ordered_set s;
    for (int q=1;q<=n;q++) {
        s.insert(q);
    }

    int q = k % n;
    while (n--) {
        auto t = s.find_by_order(q);

        cout << *t << ' ';

        s.erase(t);
        if (n) {
            q = (q % n + k) % n;
        }
    }
}