#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;  // Found key at index mid

        else if (arr[mid] < key)
            low = mid + 1;  // Search right half

        else
            high = mid - 1; // Search left half
    }

    return -1; // Not found
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[50];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in array." << endl;

    return 0;
}
