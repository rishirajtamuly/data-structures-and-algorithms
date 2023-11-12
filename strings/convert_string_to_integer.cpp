/*
Input a string of length less than 10 and convert it into integer without using builtin function.

Input : "3244"
Output : 3244

Input : "12"
Output : 12
*/

#include<iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
   // int x = stoi(s);
    int x = 0;
    int n = s.length();
    for(int i = 0; i < n; i++) {
        x = x * 10;
        x = x + (s[i] - 48);
    }
    cout << x << endl;
    return 0;
}
