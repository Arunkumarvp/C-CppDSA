#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long n = max(y, x);
        long long diag = n * (n - 1) + 1;

        if (n % 2 == 0) {
            cout << diag + y - x << "\n";
        } else {
            cout << diag + x - y << "\n";
        }
    }

    return 0;
}
