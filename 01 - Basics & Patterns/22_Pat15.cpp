#include <iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    char value = 'A';

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value << " ";
            value = value  + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;        
    }
    
}