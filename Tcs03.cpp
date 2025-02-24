#include <iostream>
using namespace std;

int main() {
    int R, C;
    cout<<"Enter the value of row & Enter the value of column"<<endl;
    cin >> R >> C;
    int M[R][C];
    
   
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> M[i][j];
        }
    }
    
    int maxOnes = 0, maxRow = 0;
    
    
    for (int i = 0; i < R; i++) {
        int count = 0;
        for (int j = 0; j < C; j++) {
            if (M[i][j] == 1) {
                count++;
            }
        }
        if (count > maxOnes) {
            maxOnes = count;
            maxRow = i + 1; // Converting to 1-based index
        }
    }
    
    cout << maxRow << endl;
    return 0;
}