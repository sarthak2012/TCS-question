/*
find the diff between sum of odd places and the even places digits
*/


#include <iostream>
#include <string> 
using namespace std;

int main() {
    int sumOdd=0;
    int sumEven=0;
    int digit;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The number is: " << num << endl;
    
    // Convert the integer to a string
    string numString = to_string(num);

    // Get the length of the string
    int length = numString.length();
    cout << "The length of the number is: " << length << endl;
    
    //check ifinput ids only between 0 to 9
    for(int i=0;i<length;i++){
        if(numString[i]<'0'||numString[i]>'9'){
            cout<<"it is invalid number";
            return 1;
        }
    }
    
    //convert char to int 
    for (int i = 0; i < length; i++) {
        digit = numString[i] - '0'; // Convert char to int
        if ((i + 1) % 2 == 1) {
            sumOdd += digit;
        } else {
            sumEven += digit;
        }
    }
    int diff = sumOdd - sumEven;
    cout << "Difference between the sum of odd and even positioned digits: " << diff << endl;

    return 0;
}
