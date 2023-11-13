/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise. [Leetcode 242]

Input : s = physicswallah, t = wallahphysics
Output: YES

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.


Example 1:

Input: s = "anagram", t = "nagaram"
Output: true

Example 2:

Input: s = "rat", t = "car"
Output: false


Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.


Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) return true;
        else return false;
}

int main() {
    string s;
    string t;
    cout << "Enter two strings" << endl;
    getline(cin, s);
    getline(cin, t);
    cout << isAnagram(s, t) << endl;
    return 0;
}
