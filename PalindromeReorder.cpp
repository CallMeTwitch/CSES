#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int uneven = 0;
    unordered_map<char, int> chars;    
    for (auto q:s) {
        chars[q]++;
        if (chars[q] & 1) {
            uneven++;
        } else {
            uneven--;
        }
    }

    if (uneven > 1) {
        cout << "NO SOLUTION";
    } else if (uneven == 1) {
        string output;

        char middle;
        for (auto q:chars) {
            if (q.second & 1) {
                middle = q.first;
            }
            for (int w=0;w<q.second/2;w++) {
                output += q.first;
            }
        }

        cout << output << middle;
        reverse(output.begin(), output.end());
        cout << output;
    } else {
        string output;

        for (auto q:chars) {
            for (int w=0;w<q.second/2;w++) {
                output += q.first;
            }
        }

        cout << output;
        reverse(output.begin(), output.end());
        cout << output;
    }
}