#include <iostream>
#include <string>

using namespace std;

bool visited[7][7];
int output = 0;
int res[49];

bool trapped(int r, int c) {
    if ((r == 6 || (visited[r - 1][c] && visited[r + 1][c])) && c > 0 && c < 6 && !visited[r][c - 1] && !visited[r][c + 1]) {
        return true;
    } else if ((c == 6 || (visited[r][c - 1] && visited[r][c + 1])) && r > 0 && r < 6 && !visited[r - 1][c] && !visited[r + 1][c]) {
        return true;
    } else if ((r == 0 || (visited[r + 1][c] && visited[r - 1][c])) && c > 0 & c < 6 && !visited[r][c - 1] && !visited[r][c + 1]) {
        return true;
    } else if ((c == 0 || (visited[r][c + 1] && visited[r][c - 1])) && r > 0 && r < 6 && !visited[r - 1][c] && !visited[r + 1][c]) {
        return true;
    } else {
        return false;
    }
}

void solve(int r, int c, int n);

void up(int r, int c, int n) {
    if (r > 0) {
        if (!visited[r - 1][c]) {
            solve(r - 1, c, n + 1);
        }
    }
}

void down(int r, int c, int n) {
    if (r < 6) {
        if (!visited[r + 1][c]) {
            solve(r + 1, c, n + 1);
        }
    }
}

void left(int r, int c, int n) {
    if (c > 0) {
        if (!visited[r][c - 1]) {
            solve(r, c - 1, n + 1);
        }
    }
}

void right(int r, int c, int n) {
    if (c < 6) {
        if (!visited[r][c + 1]) {
            solve(r, c + 1, n + 1);
        }
    }
}

void solve(int r = 0, int c = 0, int n = 0) {
    if (r == 6 && !c) {
        output += (n == 48);
    } else if (!trapped(r, c)) {
        visited[r][c] = true;

        switch (res[n]) {
            case -1:
                up(r, c, n);
                right(r, c, n);
                down(r, c, n);
                left(r, c, n);
                break;

            case 0:
                up(r, c, n);
                break;
            
            case 1:
                right(r, c, n);
                break;

            case 2:
                down(r, c, n);
                break;

            case 3:
                left(r, c, n);
                break;
        }

        visited[r][c] = false;
    }
}

int main() {
    string s;
    cin >> s;

    for (int q=0;q<s.length();q++) {
        switch (s[q]) {
            case '?':
                res[q] = -1;
                break;
            
            case 'U':
                res[q] = 0;
                break;

            case 'R':
                res[q] = 1;
                break;

            case 'D':
                res[q] = 2;
                break;

            case 'L':
                res[q] = 3;
                break;
        }
    }

    solve();
    cout << output;
}