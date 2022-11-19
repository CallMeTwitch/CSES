#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> weights(n);
    for (int q=0;q<n;q++) {
        cin >> weights[q];
    }

    sort(weights.begin(), weights.end());

    int front = 0, back = n - 1;
    int c = 0;
    while (front < back) {
        if (weights[back] + weights[front] <= x) {
            front++;
        }
        back--;
        c++;
    }

    if (front == back) {
        cout << c + 1;
    } else {
        cout << c;
    }
}