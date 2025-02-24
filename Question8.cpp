// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right =n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}