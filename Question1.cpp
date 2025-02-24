#include <iostream>
using namespace std;
void sum(int arr[],int n ){
    int sumj=0;
    for(int i=0;i<n;i++){
         sumj+=arr[i];
    }
    cout<<sumj;
}
int main(){
     int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  
    sum(arr,n);
    

}
// Program to create an array take input and find sum of element in the array suppose array 1,2 ,3,4,5  output = 15 