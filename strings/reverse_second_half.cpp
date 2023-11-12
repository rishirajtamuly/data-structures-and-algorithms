/*
Input a string of even length and reverse the second half of the string.

Input : str = "abcdefgh"
Output : abcdhgfe

Input :str = "pwians"
Output : pwisna
*/

#include<iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    int n = s.length();
    int i = n/2;
    int j = n - 1;
    while(i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
    return 0;
}
