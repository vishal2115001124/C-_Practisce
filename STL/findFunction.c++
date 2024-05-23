#include <iostream>
#include <algorithm>  // Include this header for std::find
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int* ans = find(arr, arr + n, key);  // Use std::find with iterator
    if (ans != arr + n) {
        cout << "Element found at index: " << (ans - arr) << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
