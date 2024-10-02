#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n <= 1)
        return n;
    
    int fib[n + 1]; // Array to store Fibonacci numbers
    fib[0] = 0; // F(0) = 0
    fib[1] = 1; // F(1) = 1
    
    // Calculate Fibonacci numbers from F(2) to F(n)
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    return fib[n]; // Return the nth Fibonacci number
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
