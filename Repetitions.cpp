#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int max = 0, curr = 1;
    for (int q=0;q<s.length()-1;q++) {
        if (s[q] == s[q + 1]) {
            curr++;
        } else {
            if (curr > max) max = curr;
            curr = 1;
        }
    }

    cout << ((curr > max) ? curr : max);
}