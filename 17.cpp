// to find if number is a armstrong no
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp=n;
    int sum = 0;
    
        while (temp > 0) {
        int digit = temp % 10;   // Get the last digit
        sum += digit * digit * digit;  // Add cube of the digit to sum
        temp /= 10;  // Remove the last digit
    }

    if(sum==n)
    cout<<"yess";
    else
    cout<<"no";
   
    
}
