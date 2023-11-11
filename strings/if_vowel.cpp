// Input a string of length n and count all the vowels in the given string.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string name = "Rishiraj Tamuly";
    int count = 0;
    int i = 0;
    while(name[i] != '\0') {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') {
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}

