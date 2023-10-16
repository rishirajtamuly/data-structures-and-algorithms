// If an array arr contains n elements, then check if the given array is a palindrome or not.

#include<iostream>
#include<vector>
using namespace std;

void palindrome(vector<int>& arr) {
    int s = arr.size();
    bool flag = true;   // true -> palindrome
    int i = 0;
    int j = s - 1;
    while(i < j) {
        if(arr[i] != arr[j]) {
            flag = false;   // false -> not palindrome
            break;
        }
        i++;
        j--;
    }
    if(flag == true) {
        cout << "Array is palindrome" << endl;
    } else {
        cout << "Array is not palindrome" << endl;
    }
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " values" << endl;
    int ele;
    for(int i = 0; i < n; i++) {    // 1, 2, 1, 4, 2, 3, 4, 5, 5 -> not palindrome. 1, 2, 3, 4, 5, 4, 3, 2, 1 -> palindrome. 1, 2, 3, 4, 5, 4, 4, 3, 2, 1 -> not palindrome
        cin >> ele;
        arr.push_back(ele);
    }
    palindrome(arr);
    return 0;
}

