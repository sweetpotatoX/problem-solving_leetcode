//
// Created by sweetpotato on 30/06/23.
//
/*
#include <iostream>
#include <vector>
using namespace std;
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> u(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0)
                u[i] = nums[i];
            else
                u[i] = u[i-1] + nums[i];
        }

        return u;
    }
};


//test
/*
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    Solution solution;
    vector<int> result = solution.runningSum(nums);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}
*/
