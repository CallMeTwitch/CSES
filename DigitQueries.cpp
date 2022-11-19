#include <iostream>
#include <string>

using namespace std;

long long pow(long long a) {
    long long b = 10;
    long long output = 1;
    while (a) {
        if (a & 1) {
            output *= b;
        }
        a >>= 1;
        b *= b;
    }

    return output;
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long count = 1;
        long long q = 9;
        while (n > q) {
            n -= q;
            count++;
            q = 9 * pow(count - 1) * count;
        }
        n--;

        long long x = n / count, y = n % count;
        string output = to_string(pow(count - 1) + x);

        cout << output[y] << '\n';
    }
}