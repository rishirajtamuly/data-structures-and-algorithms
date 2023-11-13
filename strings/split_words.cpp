// Given a sentence, split every single word of the sentence and print in a new line.

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    stringstream ss(s);
    string temp;

    while(ss >> temp) {
        cout << temp << endl;
    }

    return 0;
}
