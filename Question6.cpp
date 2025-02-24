#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int element;
    cout<<"Enter the element you want to find :"<<endl;
    cin>>element;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i = 0;i<n;i++){
        if(arr[i]==element){
            count++;
        }
    }
    cout<<"Number"<<count<<endl;

}