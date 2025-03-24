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
 #include <climits>


using namespace std;
class Solution {
    public:
        int maximumWealth(vector<vector<int>>& accounts) {
            int maxi = 0;
            
            for (int i = 0; i < accounts.size(); i++)
            {
                int sum = 0;
                for (int j = 0; j < accounts[i].size(); j++)
                {
                    sum += accounts[i][j];
                }
                maxi = max(maxi, sum);       
            }
            return maxi;
        }
        
    };


    int main()
    {
        Solution s;
        int n, m;
        cin >> n >> m;
        vector<vector<int>> accounts(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> accounts[i][j];
            }
        }
        cout << s.maximumWealth(accounts) << endl;
        return 0;
    }