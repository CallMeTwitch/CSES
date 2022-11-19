#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long output = 0;
    long long t;

    int q=1;
    while (true) {
        t = n / pow(5, q);
        if (t) {
            output += t;
        } else break;
        q++;
    }

    cout << output;
}