//
// Created by sweetpotato on 30/06/23.
//
/*
#include <iostream>
#include<vector>
using namespace std;
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=0;
        for(int i=0;i<accounts.size();i++){
            int wealth = 0;
            for(int j=0;j<accounts[0].size();j++) wealth+=accounts[i][j];

            max_wealth = max(max_wealth, wealth);
        }
        return max_wealth;
    }
};
//test
/*
int main() {
    vector<vector<int>> accounts = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution solution;
    int maxWealth = solution.maximumWealth(accounts);
    cout << maxWealth << endl;
    return 0;
}*/
