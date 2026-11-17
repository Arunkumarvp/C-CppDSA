#include <iostream>
#include <string>

using namespace std;


class solution {
public:
    int repetitions(const string& s) {
        int max_count = 0;
        int current_count = 0;
        char previous = '\0';

        for (char current : s) {
            if (current == previous) {
                ++current_count;
            } else {
                previous = current;
                current_count = 1;
            }
            if (current_count > max_count) {
                max_count = current_count;
            }
        }

        return max_count;
    }

    int characterReplacement(const string& s, int k) {
        int frequency[26] = {};
        int left = 0;
        int max_frequency = 0;
        int answer = 0;

        for (int right = 0; right < static_cast<int>(s.size()); ++right) {
            int current_frequency = ++frequency[s[right] - 'A'];
            if (current_frequency > max_frequency) {
                max_frequency = current_frequency;
            }

            while (right - left + 1 - max_frequency > k) {
                --frequency[s[left] - 'A'];
                ++left;
            }

            int window_length = right - left + 1;
            if (window_length > answer) {
                answer = window_length;
            }
        }

        return answer;
    }
};


int main() {
    string s;
    int k;
    cin >> s >> k;
    solution solver;
    cout << solver.characterReplacement(s, k) << '\n';
}