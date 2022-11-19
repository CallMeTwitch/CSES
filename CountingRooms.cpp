#include <iostream>
#include <string>

using namespace std;

char grid[1001][1001];

void DFS(int q, int w) {
    grid[q][w] = '#';

    if (grid[q + 1][w] == '.') DFS(q + 1, w);
    if (grid[q - 1][w] == '.') DFS(q - 1, w);
    if (grid[q][w + 1] == '.') DFS(q, w + 1);
    if (grid[q][w - 1] == '.') DFS(q, w - 1);
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int q=0;q<n;q++) {
        for (int w=0;w<m;w++) {
            cin >> grid[q][w];
        }
    }

    int output = 0;
    for (int q=0;q<n;q++) {
        for (int w=0;w<m;w++) {
            if (grid[q][w] == '.') {
                DFS(q, w);
                output++;
            }
        }
    }

    cout << output;
}