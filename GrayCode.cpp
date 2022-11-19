#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int q=0;q<1<<n;q++) {
        bitset<32> r(q ^ (q >> 1));
        cout << r.to_string().substr(32 - n) << ' ';
    }
}