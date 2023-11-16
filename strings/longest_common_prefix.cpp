/* Input n strings and write a program to find the longest common prefix string of all the strings.

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""

Explanation: There is no common prefix among the input strings.
*/


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 1) return strs[0];
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n - 1];
        string s = "";
        for(int i = 0; i < min(first.size(), last.size()); i++) {
            if(first[i] == last[i]) {
                s += first[i];
            } else return s;
        }
        return s;
}

int main() {
    int n;
    cout << "Enter size of vector : ";
    cin >> n;
    vector<string> v;
    cout << "Enter " << n << " strings " << endl;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    cout << longestCommonPrefix(v) << endl;

    return 0;
}
