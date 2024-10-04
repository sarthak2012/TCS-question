// max product subarray
#include <iostream>
#include <algorithm> // For max and min functions
using namespace std;

int maxProductSubarray(int arr[], int n) {
    // Initialize variables
    int maxProduct = arr[0];
    int minProduct = arr[0];
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            // Swap max and min if the current element is negative
            swap(maxProduct, minProduct);
        }

        // Update maxProduct and minProduct
        maxProduct = max(arr[i], maxProduct * arr[i]);
        minProduct = min(arr[i], minProduct * arr[i]);

        // Update result if maxProduct is greater
        result = max(result, maxProduct);
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxProduct = maxProductSubarray(arr, n);
    cout << "The maximum product of a subarray is: " << maxProduct << endl;

    return 0;
}
