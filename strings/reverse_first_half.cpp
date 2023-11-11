// Input a string of even length and reverse the first half of the string.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    // reverse first part
    int len = s.length();
    reverse(s.begin(), s.begin() + len/2);
    cout << s << endl;
    return 0;
}

