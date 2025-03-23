 #include <iostream>
  #include <vector>
 #include <string>
 #include <algorithm>
 #include <cmath>
 #include <map>
 #include <set>
 #include <queue>
 #include <unordered_map>
 #include <unordered_set>
 #include <iomanip>
 #include <bitset>
 #include <stack>
 #include <numeric>
 #include <random>
 #include <bits/stdc++.h>


using namespace std;
class Solution {
    public:
        int maximumWealth(vector<vector<int>>& accounts) {
            int max = 0;
            int sum = 0;
            for (int i = 1; i < accounts.size(); i++)
            {
                for (int j = 0; j < accounts[0].size; j++)
                {
                    sum += accounts[i][j];
                }
                       
            }
            
        }
        
    };