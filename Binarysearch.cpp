#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) 
            return mid;
        else if (arr[mid] < target) 
            start = mid + 1;
        else
            end = mid - 1;
    }
    
    return -1; // 
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarysearch(arr, n, target);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
