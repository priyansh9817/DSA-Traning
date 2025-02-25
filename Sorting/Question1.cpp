#include<iostream>
using namespace std;
int mergeSort(int arr1[],int arr2[], int n,int m,int merged[]){
     int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        }
        else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n) {
        merged[k++] = arr1[i++];
    }
    while (j < m) {
        merged[k++] = arr2[j++];
    }

}
int main(){
    int n1, n2;
    cout << "Size of first array: ";
    cin >> n1;
    int arr1[n1], arr2[n2];
    cout << "Elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Size of second array: ";
    cin >> n2;
    
    cout << "Elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2];
    mergeSort(arr1, arr2, n1, n2, merged);

    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    return 0;

}