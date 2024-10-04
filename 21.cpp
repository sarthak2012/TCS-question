#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int sum = 0;
    float average = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum +arr[i];
        average =(float)sum/n;
    }
    cout<<"sum is "<<sum<<endl;
    cout << fixed << setprecision(2);
    cout<<"Average is "<<average;
    return 0;
}
