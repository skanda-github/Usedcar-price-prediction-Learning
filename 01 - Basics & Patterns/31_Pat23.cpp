#include<iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Space printing
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // Star Printing
        int col = 1;
        int count = 1;
        while (col <= row)
        {
            cout << row;
            col++;
        }
        
        
        cout << endl;
        row = row + 1;
    }
    
}