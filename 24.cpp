#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm> // For sort
using namespace std;

// Function to print elements based on frequency
void printElementsByFrequency(int arr[], int n) {
    unordered_map<int, int> freqMap;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Create a vector to store the elements based on their frequency
    vector<pair<int, int>> freqVector(freqMap.begin(), freqMap.end());

    // Sort the vector based on frequency in descending order
    sort(freqVector.begin(), freqVector.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second; // Sort by frequency
    });

    // Print elements based on frequency
    cout << "Elements sorted by frequency:\n";
    for (auto& p : freqVector) {
        // Print the element p.first, p.second times
        for (int i = 0; i < p.second; i++) {
            cout << p.first << " ";
        }
    }
    cout << endl; // For a new line after printing all elements
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

    printElementsByFrequency(arr, n);

    return 0;
}
