// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
#include<vector>
using namespace std;

void smallestElement(int* arr, int size) {

    /*
    int ele;
    for(int i = 0; i < size; i++) {
        if(arr[i] != i + 1) {
            ele = i + 1;
            break;
        }
    }
    */

    bool flag = false;
    int x = 1;
    for(int i = 0; i < size; i++) {
        if(arr[i] <= 0) {
            continue;
        }
        if(x != arr[i]) {
            cout << "Smallest missing positive element is " << x << endl;
            flag = true;
            break;
        } else {
            x++;
        }
    }
    if(flag == false) {
        cout << "There was no smallest missing positive element" << endl;
    }
}

int main() {
    int myArray[] = {-8, -2, 0, 1, 2, 4, 5};
    int arraySize = sizeof(myArray)/sizeof(myArray[0]);
    smallestElement(myArray, arraySize);
    return 0;
}
