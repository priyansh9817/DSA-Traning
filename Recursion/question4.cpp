//Print GFG n times without the loop.

#include <iostream>
using namespace std;
void printGFG(int n){
    if(n==0){
        return;
    }
    else{
        cout << "GFG" << endl; // Print "GFG"
        printGFG(n-1);
    }
}
int main(){
    int x;
    cout<<"Enter the value of n";
    cin>>x;
    printGFG(x);
    return 0;

}