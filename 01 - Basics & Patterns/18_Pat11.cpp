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
        while (col <= n)
        {
            char ch = 'A' + col - 1;
            // reverse 
            // char ch = n - col + 'A';
            cout << ch << " ";
            col = col + 1;
        }
        
        cout <<endl;
        row = row + 1;
    }
    
}