/*
Problem 1: Write a program to find the count of numbers that consists of unique digits. 
Input: Input consists of two Integer lower and upper values of a range
Output: The output consists of a single line and prints the count of unique digits in a given range. 
Else Print "No Unique Number" 
Solution: Input-10, 15 Output-5
*/
#include <iostream>
using namespace std;

inline bool hasUniqueDigits(int num) { // num is 10
    int seen[10] = {0}; // Array to track digits, initialized to 0

    while (num > 0) {
        int digit = num % 10; // Get the last digit 10 % 10 = 0
        if (seen[digit]==1)      // If the digit is already seen, return false
            return false;
        seen[digit] = 1;      // Mark the digit as seen  if occouring first time
        num /= 10;            // Remove the last digit 10/10 =1
    }

    return true; 
}

int main() {
    int lower, upper, count = 0;
    cout<<"Enter the lower limit";
    cin >> lower; //lower =10
    cout<<"Enter the upper limit";
    cin>> upper;  //upper = 15

    for (int i = lower; i <= upper; i++) {
        if (hasUniqueDigits(i)) {
            count++; 
        }
    }
    if (count > 0) {
        cout << count << endl; 
    } else {
        cout << "No Unique Number" << endl;
    }

    return 0;
}
