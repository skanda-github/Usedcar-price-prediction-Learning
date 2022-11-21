#include<iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ans = 'A' + row - 1;
            cout << ans << " ";
            col = col + 1;
        }
        
        cout << endl;
        row = row + 1;
    }
    
}