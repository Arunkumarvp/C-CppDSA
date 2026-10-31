#include <iostream>

using namespace std;

int main() {
    int n;
    char c; // Changed to char to support symbols like '*', '#', etc.

    cin >> n >> c;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == n - i + 1) {
                cout << c;
            } else {
                cout << " ";
            }
        }
        cout << endl; // Added to move to the next row after completing a line
    }
    
    return 0;
}
