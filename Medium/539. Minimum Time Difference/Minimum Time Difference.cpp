//#include <iostream>
//#include <vector>
//#include <string>
//#include <climits>
//#include <algorithm>
//
//using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // buckets array
        vector<bool> minutes(24 * 60, false); //1440
        for (const string& time : timePoints) { // Process each time point
            // Extract hours and minutes from the time string
            int h = stoi(time.substr(0, 2));
            int m = stoi(time.substr(3));
            int min = h * 60 + m; //make it all minutes
            //checking dublication
            if (minutes[min]) return 0; // ans will be 0
            minutes[min] = true;
        }

        int prevIndex = INT_MAX;
        int firstIndex = INT_MAX;
        int lastIndex = INT_MAX;
        int ans = INT_MAX;

        // the min difference
        for (int i = 0; i < 1440; i++) {
            if (minutes[i]) {
                if (prevIndex != INT_MAX) {
                    ans = min(ans, i - prevIndex);
                }
                prevIndex = i; //update the index
                if (firstIndex == INT_MAX) {
                    firstIndex = i;
                }
                lastIndex = i;
            }
        }

        //checking for "00:00" then ans
        return min(ans, 24 * 60 - lastIndex + firstIndex);
    }
};
//testing


//int main()
//{
//    Solution solution;
//    int n;
//    cin >> n;
//
//    vector<string> timePoints(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> timePoints[i];
//    }
//
//    int result = solution.findMinDifference(timePoints);
//    cout << result << endl;
//
//    return 0;
//}