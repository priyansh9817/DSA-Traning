#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  // Correct way to get array size

    for (int i = 0; i < n; i++) {  // Use '<' instead of '<='
        if (arr[i] == 4) {
            cout << arr[i];
        }
    }

    return 0;
}
