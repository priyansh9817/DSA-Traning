// Print 1 to N without loop
#include <iostream>
using namespace std;
void printnum(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printnum(n - 1);
}
int main()
{
    int x;
    cout << "Enter the value of n";
    cin >> x;
    printnum(x);
    cout << endl;
    return 0;
}