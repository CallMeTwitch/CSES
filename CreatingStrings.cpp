#include <iostream>
#include <string>
#include <map>

using namespace std;

void solve(map<char, int> freq, int n, string curr = "") {
    if (!n) {
        cout << curr << '\n';
    } else {
        for (auto q:freq) {
            if (q.second) {
                freq[q.first]--;
                solve(freq, n - 1, curr + q.first);
                freq[q.first]++;
            }
        }
    }
}

int factorial(int n) {
    return (!n) ? 1 : (n * factorial(n - 1));
}

int main() {
    string s;
    cin >> s;

    int n = 0;
    map<char, int> freq = {{'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0}, {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0}, {'m', 0}, {'n', 0}, {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0}, {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0}, {'y', 0}, {'z', 0}};
    for (char q:s) {
        freq[q]++;
        n++;
    }

    int total = factorial(n);
    for (auto q:freq) {
        total /= factorial(q.second);
    }

    cout << total << '\n';
    solve(freq, n);
}