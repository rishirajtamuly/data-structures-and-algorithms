/*
Check whether the given string is palindrome or not.

Input : "abcde"
Output : No

Input : "abcdcba"
Output : Yes
*/

#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while(i < j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    if(isPalindrome(s) == true)
        cout << "String is palindrome" << endl;
    else
        cout << "String is not palindrme" << endl;
    return 0;
}
