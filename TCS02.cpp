#include<iostream>
using namespace std;
int countElementsGreaterThanPrior(int arr[],int n){
    int max_so_far = arr[0];
    int count = 1;
    for(int i = 1;i<n;i++){
        if(arr[i]>max_so_far){
            count ++ ;
            max_so_far = arr[i]; 
        }
    }
     return count;

}
int main(){
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    int arr[N]; 
    cout << "Enter array elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; 
    }

    int result = countElementsGreaterThanPrior(arr, N);
    cout << "Output: " << result << endl; 

    return 0;
}