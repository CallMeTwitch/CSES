#include <iostream>

using namespace std;

char chess[8][8];
int output = 0;

bool rightDiag[15];
bool leftDiag[15];
bool row[7];

void solve(int n = 0) {
    if (n == 8) {
        output++;
    } else {
        for (int q=0;q<8;q++) {
            if (chess[q][n] == '.' && !leftDiag[q - n + 7] && !rightDiag[q + n] && !row[q]) {
                leftDiag[q - n + 7] = 1;
                rightDiag[q + n] = 1;
                row[q] = 1;

                solve(n + 1);

                leftDiag[q - n + 7] = 0;
                rightDiag[q + n] = 0;
                row[q] = 0;
            }
        }
    }
}

int main() {
    for (int q=0;q<8;q++) {
        for (int w=0;w<8;w++) {
            cin >> chess[q][w];
        }
    }

    solve();
    cout << output;
}