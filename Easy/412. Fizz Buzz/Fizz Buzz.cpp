//
// Created by sweetpotato on 02/07/23.
//
/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                result.push_back("Fizz");
            } else if (i % 5 == 0) {
                result.push_back("Buzz");
            } else {
                result.push_back(to_string(i));
            }
        }

        return result;
    }
};
//test
/*
int main() {
    int n;
    cin >> n;

    Solution solution;
    vector<string> fizzBuzzResult = solution.fizzBuzz(n);

    for (const string& value : fizzBuzzResult) {
        cout << value << endl;
    }

    return 0;
}
*/
