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
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // Star Printing
        int col = n - row + 1;
        while (col)
        {
            cout << "*";
            col--;
        }
        
        
        cout << endl;
        row = row + 1;
    }
    
}