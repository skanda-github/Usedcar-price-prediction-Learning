#include<iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // 1st triangle
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // 2nd triangle
        int col = 1;
        while (col <= row)
        {
            cout << col++;
        }
        
        // 3rd triangle
        int start = row - 1;
        while(start){
            cout << start--;
        }

        cout << endl;
        row = row + 1;
    }
    
}