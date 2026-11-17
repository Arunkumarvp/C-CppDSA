#include <iostream>
#include <vector>


using namespace std;




class Solution {
public:
    long long missingNumber(const vector<long long>& nums) {
        long long n = nums.size() + 1;
        long long total_sum = (n * (n + 1)) / 2;
        long long sum = 0;
        for (long long num : nums) {
            sum += num;
        }
        return total_sum - sum;
    }
};


int main(){
    vector<long long> v;
    int n,c;
    cin>> n;
    for(int i=0;i<n-1;i++){
        cin>>c;
        v.push_back(c);
    }
    Solution s;
    cout<<s.missingNumber(v)<<endl;

    
    return 0;

}