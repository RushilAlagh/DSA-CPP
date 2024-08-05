#include <iostream>
using namespace std;

int getPivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    
    return -1;
}

int findPosition(int arr[], int n, int k) {
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        // Binary Search on second half
        return binarySearch(arr, pivot, n - 1, k);
    } else {
        // Binary Search on first half
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    int n, k;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> k;

    int position = findPosition(arr, n, k);
    if (position != -1) {
        cout << "Element found at index " << position << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
