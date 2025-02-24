// Program  to find Smallest number in array

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[0];

    // int min = arr[0];
    // for(int i=0;i<n;i++){
    //     if(min>arr[i]){
    //         min = arr[i];
    //     }
    // }
    // cout<<min;
}