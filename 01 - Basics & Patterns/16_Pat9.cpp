#include <iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        // int col = 1;
        // while (col <= row)
        // {
        //     cout << row - col + 1 << " ";
        //     col = col + 1; 
        // }
        int col = row;
        while (col)
        {
            cout << col--;
        }
        
        
        cout << endl;
        row = row + 1;

    }
    
}