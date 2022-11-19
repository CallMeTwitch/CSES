#include <iostream>
#include <limits>

using namespace std;

long long output = numeric_limits<long long>::max();
long long diff = 0;
long long arr[20];
long long n;

void solve(long long a) {
    if (a == n) {
        output = min(abs(diff), output);
        return;
    }

    diff += arr[a];
    solve(a + 1);
    diff -= arr[a] * 2;
    solve(a + 1);
    diff += arr[a];
}

int main() {
    cin >> n;
    for (long long q=0;q<n;q++) {
        cin >> arr[q];
    }
    
    solve(0);
    cout << output;
}