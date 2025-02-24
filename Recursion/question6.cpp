#include<iostream>
using namespace std;
int climb(int n){
    if(n<=2 ){
        return n;
    }
    return climb(n-1)+climb(n-2);

}
int main(){
    int x;
    cout<<"Enter the value x: ";
    cin>>x;
    cout<<"Number of ways to climb "<<x<<" stairs: "<<climb(x)<<endl;
}