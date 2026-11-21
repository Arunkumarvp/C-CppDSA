class Solution {
public:
    int countElements(vector<int>& nums) {
     int i=nums.size();

    }
};


class Solution {
public:
    vector<int> findElements(vector<int> arr) {

        // code here
        int n=arr.size();
        if (n>3) return {};

        int largest=INT_MIN;
        int second_largest=INT_MIN;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > largest) {
                second_largest=arr[i];
                largest=arr[i];
            }else if (arr[i] > second_largest) {
                second_largest=arr[i];
            }

            vector <int> res;
            for (int j =0;j<n;j++) {
                if (arr[i]>second_largest) {
                    res.push_back(arr[j]);
                }

            }
        }

    }
};