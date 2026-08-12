
#include<iostream>
#include<string>
using namespace std;
class Solution {
  public:
    void checkString(const string& s) {
        int v = 0;
        int c = 0;

        for (char ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                v++;
            } else {
                c++;
            }
        }

        if (v > c) {
            cout << "Yes";
        } else if (v < c) {
            cout << "No";
        } else {
            cout << "Same";
        }
    }
};

int main() {
    string s;
    if (!(cin >> s)) {
        return 0;
    }

    Solution solution;
    solution.checkString(s);
    return 0;
}
