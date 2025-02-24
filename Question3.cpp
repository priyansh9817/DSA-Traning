#include<iostream>
using namespace std;
int main(){
    
    int n, evencount=0, oddcount=0;
    cout<<"Enter the Size of n"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout<<"Total number of even "<<evencount<<endl;
    cout<<"Total number of odd "<<oddcount<<endl;
    
}