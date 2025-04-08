//  #include <iostream>
//   #include <vector>
//  #include <string>
//  #include <algorithm>
//  #include <cmath>
//  #include <map>
//  #include <set>
//  #include <queue>
//  #include <unordered_map>
//  #include <unordered_set>
//  #include <iomanip>
//  #include <bitset>
//  #include <stack>
//  #include <numeric>
//  #include <random>
//  #include <bits/stdc++.h>
//  #include <climits>


// using namespace std;
class Solution {
    public:
        int maximumWealth(vector<vector<int>>& Money) {
            int Biggest_Wealth = 0;
            for (int i = 0;i < Money.size(); i++ ){
            int customer_wealth = 0;
            for (int j = 0; j < Money[i].size(); j++ ){
                customer_wealth += Money[i][j];
            } 
            Biggest_Wealth = max (customer_wealth , Biggest_Wealth);
            }
            return Biggest_Wealth;
        }
    };
   /*SOLUTION TESTER*/

    // int main()
    // {
    //     Solution s;
    //     int n, m;
    //     cin >> n >> m;
    //     vector<vector<int>> Money(n, vector<int>(m));
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             cin >> Money[i][j];
    //         }
    //     }
    //     cout << s.maximumWealth(Money) << endl;
    //     return 0;
    // }