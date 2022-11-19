#include <iostream>

using namespace std;

int mem[200001];
int main() {
    int n, t;
    cin >> n;

    int output = 0;
    while (n--) {
        cin >> t;
        output += (mem[t - 1] == 0);
        mem[t]++;
    }

    cout << output;
}