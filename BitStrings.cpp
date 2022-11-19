#include <iostream>

using namespace std;

typedef long long ll;

long long modpow(ll x, ll y, ll n) {
    ll output = 1;

    while (y) {
        if (y & 1) {
            output = (output * x) % n;
            y--;
        } else {
            x = (x * x) % n;
            y >>= 1;
        }
    }

    return output;
}

int main() {
    ll n;
    cin >> n;

    cout << modpow(2, n, 1000000007);
}