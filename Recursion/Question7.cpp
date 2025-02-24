#include<iostream>
using namespace std;
int matrix(int i, int j){
    if(i==1||j==1){
        return 1;
    }
    return matrix(i-1,j)+matrix(i,j-1);
}
int main(){
    int i,j;
    cout<<"Enter i, j: ";
    cin>>i>>j;
    cout<<" Number of ways: " <<matrix(i,j)<<endl;
}
