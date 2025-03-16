//
// Created by abdob on 3/16/2025.
//
 #include <iostream>
 #include <vector>
// #include <string>
// #include <algorithm>
// #include <cmath>
// #include <map>
// #include <set>
// #include <queue>
// #include <unordered_map>
// #include <unordered_set>
// #include <iomanip>
// #include <bitset>
// #include <stack>
// #include <numeric>
// #include <random>
// #include <bits/stdc++.h>


// using namespace std;

// int main() {

//     vector<int> input;
//     vector<int> output;
//     int n, x, y, i, v;
//     cin >> n;
    
//     for ( i = 0; i < n; i++)
//     {
//         cin >> y;
//         input.push_back(y);
//     }
//     if (input[0])
//     {
//        cout << input[0] <<;
//     }
    
//     cout <<  << endl;
// }




class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
    
            for ( int i = 1; i < nums.size(); i++)
            
                nums[i] += nums [i-1];
                return nums;
            
            
        } 
    
    };