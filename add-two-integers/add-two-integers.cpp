//
// Created by sweetpotato on 24/06/23.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};

//test
int main() {
    Solution solution;
    int result = solution.sum(5, 3);
    cout << result << endl;
    return 0;
}
