#include <iostream>
using namespace std;
int main() {
    // B G G B G -> G B G G B -> G G B G B
    // Keep swapping {B,G} t times.
    // O(nt) time.
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    while (t > 0) {
        for (int i = 0; i < s.length();) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i += 2;
            } else {
                ++i;
            }
        }
        --t;
    }
    cout << s;
}
