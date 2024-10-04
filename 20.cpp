you are gve an array with  elemnts now the output must be such  that the firsty half is in increasing order and the second half is in decreasing order


#include <iostream>
#include <algorithm> // For sort() function
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the first half in increasing order
    sort(arr, arr + n / 2);

    // Sort the second half in decreasing order
    sort(arr + n / 2, arr + n, greater<int>());

    // Print the result
    cout << "Array after sorting first half in increasing and second half in decreasing order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



#include <iostream>
using namespace std;

// Function to sort the first half in increasing order
void sortFirstHalfIncreasing(int arr[], int mid) {
    for (int i = 0; i < mid - 1; i++) {
        for (int j = 0; j < mid - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort the second half in decreasing order
void sortSecondHalfDecreasing(int arr[], int mid, int n) {
    for (int i = mid; i < n - 1; i++) {
        for (int j = mid; j < n - (i - mid) - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    // Find the middle of the array
    int mid = n / 2;

    // Sort first half in increasing order
    sortFirstHalfIncreasing(arr, mid);

    // Sort second half in decreasing order
    sortSecondHalfDecreasing(arr, mid, n);

    // Print the result
    cout << "Array after sorting first half in increasing and second half in decreasing order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
