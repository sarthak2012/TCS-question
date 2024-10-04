// median of the array
#include <iostream>
using namespace std;

// Function to sort the array (using bubble sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the median
float findMedian(int arr[], int n) {
    // First, sort the array
    bubbleSort(arr, n);

    // If n is odd, return the middle element
    if (n % 2 != 0) {
        return arr[n / 2];
    } 
    // If n is even, return the average of the two middle elements
    else {
        return (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
    }
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

    float median = findMedian(arr, n);

    cout << "The median is: " << median << endl;

    return 0;
}
