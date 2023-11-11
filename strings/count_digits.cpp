/*
 Return the total number of digits in a
 number without using any loop.

 Hint : Try using inbuilt to_string() function.
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int x;
    cout << "Enter a number : ";
    cin >> x;
    string s = to_string(x);
    cout << s.length() << endl;
    return 0;
}
