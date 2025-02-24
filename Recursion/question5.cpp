// sum of first n term 
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
       return sum(n-1)+ pow(n,3);
    

}
int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int result = sum(x);  // Store the result
    cout << "Sum of first " << x << " cube numbers: " << result << endl;  // Print the result

    return 0;
}