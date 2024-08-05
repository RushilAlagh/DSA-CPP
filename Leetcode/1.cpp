#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements of array: ";
    cin >> n;
    
    int arr[10]; // Assuming max size is 10 as per the original code

    // Input elements into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        left_sum += arr[i];
        if (left_sum == sum) {
            cout << "Pivot element is at index " << i << endl;
            return 0; // Exit after finding the pivot
        }
        sum -= arr[i];
    }

    cout << "Pivot element not found" << endl;
    return -1;
}
