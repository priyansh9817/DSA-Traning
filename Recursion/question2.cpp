// Write  a recursive solution to evaluate the polynomial series for any input x and n

#include<iostream>
using namespace std;
int polynomial(int x, int n) {
    if (n == 1)
        return 1;
    return polynomial(x, n - 1) + pow(x, n - 1);
}

int main() {
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = polynomial(x, n);
    cout << "Output: " << result << endl;
    return 0;
}