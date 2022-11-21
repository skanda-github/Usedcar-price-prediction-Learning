#include <iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        // Soln 1
        // int value = row;
        while (col <= row)
        {
            // Soln 1 
            // cout << value << " ";
            // value = value + 1;

            // Soln 2
            cout << row + col - 1 << " ";

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}